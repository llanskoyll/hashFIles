#include "fileInfo.h"

fileInfo::fileInfo(std::string name, std::string path) {
  _name = name;
  _path = path;
}

void fileInfo::setHash(unsigned long &hash) {
  _hash = hash;
}
void fileInfo::setThread(unsigned int &thread) {
  _thread = thread;
}


std::string fileInfo::getName() {
  return _name;
}
std::string fileInfo::getPath() {
  return _path;
}
unsigned long fileInfo::getHash() {
  return _hash;
}
unsigned int fileInfo::getThread() {
  return _thread;
}
