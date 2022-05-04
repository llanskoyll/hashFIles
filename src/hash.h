#pragma once
#ifndef HASHFILE_HASH_H
#define HASHFILE_HASH_H


#include "fileInfo.h"
#include "error.h"

#include <iostream>
#include <vector>
#include <fstream>
#include <thread>
#include <mutex>

// возможные состояния потока
enum ThreadStatus {
  ThreadStatusFree, // поток свободен
  ThreadStatusBusy, // поток обрабатывает файл
  ThreadStatusEnd // поток должен прекратить работу
};

void hashCalc(std::vector <fileInfo> &file_vec, unsigned short int &countThread);
void CRC32_count(fileInfo &file);
unsigned int CRC32_function(unsigned char *buf, unsigned long len);
void CRC32_multithread_count(fileInfo **file, ThreadStatus &status, std::mutex &th_mutex);

#endif //HASHFILE_HASH_H
