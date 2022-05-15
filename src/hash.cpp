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
	try 
	{
	
	std::string file_path = file.getPath();
	std::ifstream fout(file_path,std::ios::binary | std::ios::in);

	if(!fout.is_open()) { throw "Не удалось открыть файл для подсчета CRC"; }

	const unsigned long max_size_buff = 4096*1024;

	std::streamoff size = 0; // размер файла
	fout.std::istream::seekg(0,std::ios_base::end);
	size = fout.std::istream::tellg();
	

	file.setSize(size);

	unsigned int cnt = 0;

	if(size > max_size_buff)  
	{	
		readLargeFile(file_path,max_size_buff,cnt,crc_table);

	} else 
	{
		readLightFile(file_path,size,cnt,crc_table);
	}

	file.setHash(cnt);
	
	} catch (const char *ex) {
		setError(ex);
	}
}

void readLargeFile(const std::string &file_path, const unsigned long &max_size_buff, unsigned int &cnt, const std::vector <unsigned int> &crc_table) {

	std::ifstream fout(file_path,std::ios::binary | std::ios::in);
	
	if(!fout.is_open()) { throw "Не удалось открыть файл для подсчета CRC"; }

	char buf [max_size_buff];
	fout.std::ifstream::seekg(0,std::ios_base::beg);
	fout.read(buf,max_size_buff);

	cnt = CRC32_function((unsigned char*)buf, max_size_buff, crc_table);
}


void readLightFile(const std::string &file_path, const std::streamoff &size, unsigned int &cnt,const std::vector <unsigned int> &crc_table) {

	std::ifstream fout(file_path,std::ios::binary | std::ios::in);

	if(!fout.is_open()) { throw "Не удалось открыть файл для подсчета CRC"; }

	char buf [size];  
	fout.std::istream::seekg(0,std::ios_base::beg);
	fout.read(buf,size);

	cnt = CRC32_function((unsigned char*)buf, fout.gcount(), crc_table);	
}

	