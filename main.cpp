#include "jsonReader.h"
#include "hash.h"
#include <map>
#include <vector>

int main(int argc, char* argv[]) {
  if(argc < 3) {
    std::string pathJSON = argv[1];
    std::vector<std::string> pathFiles;
    std::map <std::string, unsigned int> fileMp;

    readJSON(pathJSON,pathFiles);
    hashCalc(pathFiles,fileMp);

    for(auto& item: fileMp) {
      std::cout << "File name: " << item.first << "\t";
      std::cout << "hash file: " << item.second << std::endl;
    }
  } else {
    throw 1;
  }
  return 0;
}
