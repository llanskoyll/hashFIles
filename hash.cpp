#include "hash.h"

void hashCalc(std::vector<std::string> &pathFiles,std::map <std::string, unsigned int> &fileMp)
{
  for(int i = 0; i < pathFiles.size(); i++) {
    std::string name = split(pathFiles[i],'/');
    fileMp[name] = CRC32_count(pathFiles[i]);
    if(fileMp[name] == 0) {
      error("Неверный указанный файл либо путь для хэширования!");
    }
  }
  pathFiles.clear();
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

//возвращание конечного CRC32. Достаточно вызвать эту функцию и указать имя файла, для которого будет произведён расчёт
unsigned int CRC32_count(std::string &filename)
{
	char buf[4096*64]; //сколько символов в файле, на самом деле, это должно быть больше, 2^31-1 будет для файла размером 2ГБ
	std::ifstream f (filename,std::ios::binary);

	f.read(buf,4096*64);
	return CRC32_function((unsigned char*)buf, f.gcount());
}

std::string split(const std::string &str, char sym) {

   std::vector<std::string> result; // результат
   int length_str = str.length();
   if (!str.empty()) { // Проверка на пустое строку
        std::string count = "";
        for(int i = 0; i < length_str; i++) {
            if(str[i] == sym) {
                result.push_back(count);
                count = "";
            } else {
                count += str[i];
            }
        }
        result.push_back(count);
    }
    std::string len = result[result.size() - 1];
    return len;
}
