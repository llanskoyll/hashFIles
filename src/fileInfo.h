#pragma once
#ifndef HASHFILE_FILEINFO_H
#define HASHFILE_FILEINFO_H

#include <iostream>
#include <vector>

class fileInfo {
private:

  std::string _name = "";
  std::string _path = "";
  unsigned long _hash = 0;
  unsigned int _thread = 0;


public:

  fileInfo(std::string name, std::string path);
  ~fileInfo() {};

  void setHash(unsigned long &hash);
  void setThread(unsigned int &thread);

  std::string getName();
  std::string getPath();
  unsigned long getHash();
  unsigned int getThread();

};

#endif //HASHFILE_FILEINFO_H
