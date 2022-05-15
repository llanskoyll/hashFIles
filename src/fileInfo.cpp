#include "fileInfo.h"

fileInfo::fileInfo(std::string name, std::string path) {
  _name = name;
  _path = path;
}

void fileInfo::setHash(unsigned int &hash) {
  _hash = hash;
}
void fileInfo::setThread(unsigned int &thread) {
  _thread = thread;
}

void fileInfo::setSize(std::streamoff &size) {
    _size = (size)/(1024*1024);
}

std::string fileInfo::getName() {
  return _name;
}
std::string fileInfo::getPath() {
  return _path;
}
unsigned int fileInfo::getHash() {
  return _hash;
}
unsigned int fileInfo::getThread() {
  return _thread;
}

unsigned int fileInfo::getSize() {
  return _size;
}
