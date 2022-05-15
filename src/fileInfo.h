#pragma once
#ifndef HASHFILE_FILEINFO_H
#define HASHFILE_FILEINFO_H

#include <iostream>
#include <vector>

class fileInfo {
private:

  std::string _name = "";
  std::string _path = "";
  unsigned int _hash = 0;
  unsigned int _thread = 0;
  std::streamoff _size = 0;

public:

  fileInfo(std::string name, std::string path);
  ~fileInfo() {};

  void setHash(unsigned int &hash);
  void setThread(unsigned int &thread);
  void setSize(std::streamoff &size);

  std::string getName();
  std::string getPath();
  unsigned int getHash();
  unsigned int getThread();
  unsigned int getSize();

};

#endif //HASHFILE_FILEINFO_H
