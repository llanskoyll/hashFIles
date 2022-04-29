#include "jsonReader.h"

// Чтение из файла
void readFIle(std::string &path) {
  std::ifstream fin;
  fin.open(path);
  std::cout << path << std::endl;
  if(fin.is_open()) {
    std::string line;
    while(getline(fin,line)) {
      std::cout << line << std::endl;
    }
  } else {
    std::cout << "Error read file" << std::endl;
  }
  fin.close();
}
// Чтение из JSON
void readJSON(std::string &pathJSON, std::vector<std::string> pathFiles) {
  std::cout << pathJSON << std::endl;
  std::ifstream file(pathJSON);

  json jsn;
  file >> jsn;
  const auto& files = jsn["files"];
  for(const auto& f: files) {
    std::cout << f << std::endl;
  }
}
