#include "jsonReader.h"
#include <sstream>

// Чтение из JSON
void readJSON(std::string &pathJSON, std::vector<std::string> &pathFiles) {
  std::ifstream file(pathJSON);
  if(file.is_open()) {
    json jsn;
    file >> jsn;
    const auto& files = jsn["files"];
    for(const auto& f : files) {
      pathFiles.push_back(f);
    }
    file.close();
  } else {
    error("Не удалось открыть файл!");
  }
}
