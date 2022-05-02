#include "jsonReader.h"
#include "hash.h"
#include "trappingError.h"

#include <map>
#include <vector>
#include <string>
#include <thread>

int main(int argc, char* argv[]) {
  if(argc < 3) {
    std::string pathJSON = argv[1];
    std::vector<std::string> pathFiles;
    std::map <std::string, unsigned int> fileMp;
    readJSON(pathJSON,pathFiles);

    std::vector <std::thread> th_vec;
    for(int i = 0; i < pathFiles.size(); i++) {
      th_vec.push_back(std::thread(hashCalc,std::ref(pathFiles[i]),std::ref(fileMp)));
    }
    for(int i = 0; i < th_vec.size(); i++) {
      th_vec.at(i).join();
    }
    // hashCalc(pathFiles,fileMp);
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
