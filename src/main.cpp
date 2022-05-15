#include "jsonReader.h"
#include "hash.h"
#include "fileInfo.h"
#include "error.h"
#include "print.h"

#include <vector>
#include <string>
#include <thread>

int main(int argc, char* argv[]) {

  try 
  {

    if(argc != 3 || std::thread::hardware_concurrency() < std::stoi(argv[2])) { throw "Неверные аргументы"; };

    std::string path_JSON = argv[1];
    unsigned short int count_Thread = std::stoi(argv[2]);
    std::vector <fileInfo> file_vec;

    readJSON(path_JSON,file_vec);
    hashCalc(file_vec,count_Thread);
    printInfoFile(file_vec);

  } catch(const char *ex) 
  {
    setError(ex);
  }

  return 0;
}