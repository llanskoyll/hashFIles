#include <iostream>
#include <vector>
#include "jsonReader.h"

int main(int argc, char* argv[]) {
  if(argc > 1) {
  std::string address = argv[1];
  std::vector<std::string> pathFiles;
  readJSON(address,pathFiles);
  }
  return 0;
}

// "/home/artem/Рабочий стол/project/test_task/current_files/test"
// "files" : [
//   {"path" : "/home/artem/Рабочий стол/project/test_task/current_files/test_1.txt"},
//   {"path" : "/home/artem/Рабочий стол/project/test_task/current_files/test_2.txt"},
//   {"path" : "/home/artem/Рабочий стол/project/test_task/current_files/test_3.txt"}
// ]
// {
  // "test_1" : "/home/artem/Рабочий стол/project/test_task/current_files/test_1.txt",
  // "test_1" : "/home/artem/Рабочий стол/project/test_task/current_files/test_2.txt",
  // "test_2" : "/home/artem/Рабочий стол/project/test_task/current_files/test_3.txt"
// }
