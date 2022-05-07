#pragma once
#ifndef HASHFILE_HASH_H
#define HASHFILE_HASH_H


#include "fileInfo.h"
#include "error.h"

#include <omp.h>
#include <parallel/algorithm>
#include <iostream>
#include <vector>
#include <fstream>
#include <thread>
#include <mutex>

void hashCalc(std::vector <fileInfo> &file_vec, unsigned short int &countThread);
void CRC32_count(fileInfo &file);
unsigned int CRC32_function(unsigned char *buf, unsigned long len);

#endif //HASHFILE_HASH_H
