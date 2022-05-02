#include "hash.h"

void hashCalc(std::vector <fileInfo> &file_vec, unsigned short int &countThread) {
	if(countThread >= file_vec.size()) {
		std::vector <std::thread> th_vec;
		for(int i = 0; i < file_vec.size(); i++) {
			th_vec.push_back(std::thread(CRC32_count,std::ref(file_vec[i])));
		}
		for(int i = 0; i < th_vec.size(); i++) {
			th_vec.at(i).join();
		}
	}
}
unsigned int CRC32_function(unsigned char *buf, unsigned long len)
{
	unsigned long crc_table[256];
	unsigned long crc;
	for (int i = 0; i < 256; i++)
	{
		crc = i;
		for (int j = 0; j < 8; j++)
			crc = crc & 1 ? (crc >> 1) ^ 0xEDB88320UL : crc >> 1;
		crc_table[i] = crc;
	};
	crc = 0xFFFFFFFFUL;
	while (len--)
	crc = crc_table[(crc ^ *buf++) & 0xFF] ^ (crc >> 8);
	return crc ^ 0xFFFFFFFFUL;
}

void CRC32_count(fileInfo &file)
{
	std::string filename = file.getPath();
	char buf[4096*64]; //сколько символов в файле, на самом деле, это должно быть больше, 2^31-1 будет для файла размером 2ГБ
	std::ifstream f (filename,std::ios::binary);

	f.read(buf,4096*64);
	unsigned int cnt = 0;
	cnt = CRC32_function((unsigned char*)buf, f.gcount());
	if(cnt == 0) {
		setError("не удалось считать хэш файла");
	}
	file.setHash(cnt);
}
