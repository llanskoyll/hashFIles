#include "error.h"

void setError(std::string message) {
  std::cout << "\n" <<"\033[1;31m" << "Ошибка: " << message <<"\033[0m\n" << "\n";
}
