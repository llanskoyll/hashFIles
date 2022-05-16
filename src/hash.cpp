#include "hash.h"

void hashCalc(std::vector <fileInfo> &file_vec, const unsigned short int countThread) {

	std::vector <unsigned int> crc_table(256);
	createTable(crc_table);
	
	#pragma omp parallel num_threads(countThread)
	{
		#pragma omp for
		for(int i = 0; i < file_vec.size(); i++)
		{
			CRC32_count(file_vec[i],crc_table);
			unsigned int thread = omp_get_thread_num();
			file_vec[i].setThread(thread);
		}

	}
	
}

void createTable(std::vector <unsigned int> &crc_table) {

	unsigned long count = 0;

	for (int i = 0; i < 256; i++)
	{
		count = i;

		for (int j = 0; j < 8; j++) 
		{
			count = count & 1 ? (count >> 1) ^ 0xEDB88320UL : count >> 1;
		}

		crc_table[i] = count;
	};

}

void CRC32_count(fileInfo &file, const std::vector <unsigned int> &crc_table) {
	
	std::string file_path = file.getPath();

	std::fstream fout(file_path,std::ios::in | std::ios::binary);
	const unsigned int buff_size = 1024;
	unsigned char buff [buff_size];

	unsigned long cnt = 0;
	while(!fout.eof()) {
		fout.read((char*)buff,buff_size);
		cnt = CRC32_function(buff, fout.gcount(), cnt, crc_table);
	}

	file.setHash(cnt);
	fout.close();
}

unsigned int CRC32_function(unsigned char *buf, unsigned long len, unsigned long prev, const std::vector <unsigned int> &crc_table)
{
 	unsigned int crc = prev ^ 0xFFFFFFFFUL;

 	while (len--) {
 		crc = crc_table[(crc ^ *buf++) & 0xFF] ^ (crc >> 8);
 	}

	return crc ^ 0xFFFFFFFFUL;
 }
