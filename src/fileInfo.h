#pragma once

#include <iostream>
#include <vector>

class fileInfo {
private:
  std::string name = "";
  std::string path = "";
  unsigned int hash = 0;
public:
  fileInfo() {};
  void setName(std::string &name);
  void setPath(std::string &path);
  void setHash(unsigned int &hash);
  std::string getName();
  std::string getPath();
  unsigned int getHash();
  std::string split(const std::string &str, char sym);
};
