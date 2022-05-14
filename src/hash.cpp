#include "hash.h"


void createTable(std::vector <unsigned int> &crc_table) {

	unsigned long count = 0;

	for (int i = 0; i < 256; i++)
	{
		count = i;

		for (int j = 0; j < 8; j++) {
			count = count & 1 ? (count >> 1) ^ 0xEDB88320UL : count >> 1;
		}

		crc_table[i] = count;
	};

}

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

unsigned int CRC32_function(unsigned char *buf, unsigned long len, const std::vector <unsigned int> &crc_table)
{
	unsigned int crc = 0xFFFFFFFFUL;

	while (len--) {
		crc = crc_table[(crc ^ *buf++) & 0xFF] ^ (crc >> 8);
	}

	return crc ^ 0xFFFFFFFFUL;
}

void CRC32_count(fileInfo &file, const std::vector <unsigned int> &crc_table)
{
	std::string filename = file.getPath();

	char buf[4096*1024]; //сколько символов в файле, на самом деле, это должно быть больше, 2^31-1 будет для файла размером 2ГБ
	std::ifstream f (filename,std::ios::binary | std::ios::in);
	// f.read(buf,4096*1024); 4096*1024 - количество извлекаемых символов
	f.std::istream::seekg(0,std::ios_base::beg); // чтение всего файла с начала
	f.read(buf,4096*1024);

	unsigned int cnt = 0;
	cnt = CRC32_function((unsigned char*)buf, f.gcount(), crc_table);
	file.setHash(cnt);
}
