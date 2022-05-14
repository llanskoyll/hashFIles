#include "fileInfo.h"

fileInfo::fileInfo(std::string name, std::string path) {
  this->name = name;
  this->path = path;
}


void fileInfo::setName(std::string &name) {
  this->name = name;
};

void fileInfo::setPath(std::string &path) {
  this->path = path;
};
void fileInfo::setHash(unsigned int &hash) {
  this->hash = hash;
}
void fileInfo::setThread(unsigned int &thread) {
  this->thread = thread;
}


std::string fileInfo::getName() {
  return name;
}
std::string fileInfo::getPath() {
  return path;
}
unsigned int fileInfo::getHash() {
  return hash;
}
unsigned int fileInfo::getThread() {
  return thread;
}

