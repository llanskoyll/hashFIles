#include "TrappingError.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <map>

void hashCalc(std::vector<std::string> &pathFiles,std::map <std::string, unsigned int> &fileMp);
unsigned int CRC32_count(std::string &filename);
unsigned int CRC32_function(unsigned char *buf, unsigned long len);
std::string split(const std::string &str, char sym);
