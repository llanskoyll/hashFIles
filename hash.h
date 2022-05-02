#pragma once

#include "trappingError.h"
#include "fileInfo.h"
#include "error.h"

#include <iostream>
#include <vector>
#include <fstream>
#include <map>
#include <thread>

void hashCalc(std::vector <fileInfo> &file_vec, unsigned short int &countThread);
void CRC32_count(fileInfo &check);
unsigned int CRC32_function(unsigned char *buf, unsigned long len);
