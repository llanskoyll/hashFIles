#pragma once
#ifndef HASHFILE_FILEINFO_H
#define HASHFILE_FILEINFO_H

#include <iostream>
#include <vector>

class fileInfo {
private:

  std::string name = "";
  std::string path = "";
  unsigned int hash = 0;
  unsigned int thread = 0;

public:

  fileInfo() {};
  void setName(std::string &name);
  void setPath(std::string &path);
  void setHash(unsigned int &hash);
  void setThread(unsigned int &thread);

  std::string getName();
  std::string getPath();
  unsigned int getHash();
  unsigned int getThread();
  
};

#endif //HASHFILE_FILEINFO_H
