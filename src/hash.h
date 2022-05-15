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
#include <string.h>


void hashCalc(std::vector <fileInfo> &file_vec, const unsigned short int countThread);
void CRC32_count(fileInfo &file, const std::vector <unsigned int> &crc_table);
void createTable(std::vector <unsigned int> &crc_table);
void readLightFile(const std::string &file_path, const std::streamoff &size, unsigned int &cnt, const std::vector <unsigned int> &crc_table); // для файлов меньше 4.19 МБ
void readLargeFile(const std::string &file_path, const unsigned long &max_size_buff, unsigned int &cnt, const std::vector <unsigned int> &crc_table); // для файлов больше 4.19 МБ
unsigned int CRC32_function(unsigned char *buf, unsigned long len, const std::vector <unsigned int> &crc_table);

#endif //HASHFILE_HASH_H
