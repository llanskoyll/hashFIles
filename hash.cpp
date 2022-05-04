#include "hash.h"

void hashCalc(std::vector <fileInfo> &file_vec, unsigned short int &countThread) {

	if (file_vec.size() < countThread) {
		countThread = file_vec.size();
	}

	std::vector <ThreadStatus> th_status(countThread, ThreadStatusFree); // вектор состояний потоков
	std::vector <fileInfo*> th_arg(countThread, nullptr); // вектор указателей на данные для каждого потока

	std::mutex th_mutex;
	std::vector <std::thread> th_vec;

	// запускаем потоки.
	for(int j = 0; j < countThread; j++)
		th_vec.push_back(std::thread(CRC32_multithread_count,
				&th_arg[j],
				std::ref(th_status[j]),
				std::ref(th_mutex)
			));

	int cur_file_id = 0;
	while (cur_file_id < file_vec.size()) {
		th_mutex.lock();
		 // проходим по всем потоком и смотрим их состояния
			for(int j = 0; j < countThread; j++) {
				if (th_status[j] == ThreadStatusFree) {
						th_status[j] = ThreadStatusBusy;
						th_arg[j] = &file_vec[cur_file_id];
						cur_file_id++;
						break;
				}
			}
		th_mutex.unlock();
	}

	//  пока все файлы не обработаны, ждем.
	bool all_files_checked = false;
	while (!all_files_checked) {
		all_files_checked = true;
		for(int j = 0; j < countThread; j++)
			if (th_status[j] == ThreadStatusBusy) {
				all_files_checked = false;
				break;
			}
	}

	// после заваршение работы всех потоков, "закрываем" их.
	for(int j = 0; j < countThread; j++) {
		th_status[j] = ThreadStatusEnd;
		th_vec[j].join();
	}

}


void CRC32_multithread_count(fileInfo **file, ThreadStatus &status, std::mutex &th_mutex) {
	// поток ждет файла на обработку, пока не придет "сигнал" на завершение работы
	while (status != ThreadStatusEnd) {
		// ожидания файла
		while (status == ThreadStatusFree)
			;
		// если файл пришел, то обработаем его и освободим поток
		if (status==ThreadStatusBusy && *file!=nullptr) {
			CRC32_count(**file);
			th_mutex.lock();
			status = ThreadStatusFree;
			th_mutex.unlock();
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
