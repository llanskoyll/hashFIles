#include "jsonReader.h"
#include "hash.h"
#include "TrappingError.h"

#include <map>
#include <vector>
#include <string>

int main(int argc, char* argv[]) {
  if(argc < 3) {
    std::string pathJSON = argv[1];
    std::vector<std::string> pathFiles;
    std::map <std::string, unsigned int> fileMp;
    readJSON(pathJSON,pathFiles);
    hashCalc(pathFiles, fileMp);

    for(auto& item: fileMp) {
      std::cout << "File name: " << "\t" << item.first << "\t";
      std::cout << " File hash: "  << "\t" << item.second  << std::endl;
      std::cout << "-------------------------------------------------------" << std::endl;
    }
  } else {
    error("Большое количество аргументов!");
  }
  return 0;
}
