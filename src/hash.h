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
void createTable(std::vector <unsigned int> &crc_table);
void CRC32_count(fileInfo &file, const std::vector <unsigned int> &crc_table);
unsigned int CRC32_function(unsigned char *buf, unsigned long len, unsigned long prev, const std::vector <unsigned int> &crc_table);

#endif //HASHFILE_HASH_H
