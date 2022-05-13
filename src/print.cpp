#include "print.h"


void printInfoFile(std::vector<fileInfo> &file_vec) {

  for(int i = 0; i < file_vec.size(); i++) {
    std::cout << "\nИмя файла : " << "\t" << "\033[3;32;49m" << file_vec[i].getName() << "\033[0m" << "\t";
    std::cout << "Хэш файла : "  << "\t" << "\033[3;32;49m" << file_vec[i].getHash() << "\033[0m";
    std::cout << "\t номер потока: \t" << "\033[3;32;49m" << file_vec[i].getThread() << "\033[0m" << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
  }
  
}
