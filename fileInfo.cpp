#include "fileInfo.h"




void fileInfo::setName(std::string &name) {
  this->name = name;
};

void fileInfo::setPath(std::string &path) {
  this->path = path;
};
void fileInfo::setHash(unsigned int &hash) {
  this->hash = hash;
}



std::string fileInfo::getName() {
  return this->name;
}
std::string fileInfo::getPath() {
  return this->path;
}
unsigned int fileInfo::getHash() {
  return this->hash;
}




std::string fileInfo::split(const std::string &str, char sym) {
   std::vector<std::string> result; // результат
   int length_str = str.length();
   if (!str.empty()) { // Проверка на пустое строку
        std::string count = "";
        for(int i = 0; i < length_str; i++) {
            if(str[i] == sym) {
                result.push_back(count);
                count = "";
            } else {
                count += str[i];
            }
        }
        result.push_back(count);
    }
    std::string len = result[result.size() - 1];
    return len;
}
