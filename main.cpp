#include "jsonReader.h"
#include "hash.h"
#include "fileInfo.h"
#include "error.h"
#include "print.h"

#include <map>
#include <vector>
#include <string>
#include <thread>

int main(int argc, char* argv[]) {
  if(argc < 4) {
    std::string pathJSON = argv[1];
    unsigned short int countThread = std::stoi(argv[2]);

    if(std::thread::hardware_concurrency() < countThread) setError("количество потоков не соответствует системе");
    std::vector <fileInfo> file_vec;

    readJSON(pathJSON,file_vec);
    hashCalc(file_vec,countThread);
    printInfoFile(file_vec);
  } else {
    setError("большое количество аргументов");
  }
  return 0;
}
