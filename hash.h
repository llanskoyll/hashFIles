#include "trappingError.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <map>
#include <thread>

// void hashCalc(std::vector<std::string> &pathFiles,std::map <std::string, unsigned int> &fileMp);
void hashCalc(std::string &pathFiles,std::map <std::string, unsigned int> &fileMp);
void CRC32_count(std::string &filename, unsigned int &cnt);
unsigned int CRC32_function(unsigned char *buf, unsigned long len);
std::string split(const std::string &str, char sym);
