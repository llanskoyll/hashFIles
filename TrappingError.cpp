#include "TrappingError.h"

// std::string &line
void error(std::string str) {
  std::cout << "Ошибка : " << str << std::endl;
  throw 1;
}
