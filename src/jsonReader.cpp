#include "jsonReader.h"

void readJSON(std::string &pathJSON, std::vector<fileInfo> &file_vec) {
  std::ifstream file(pathJSON);
  if(file.is_open()) {
    json jsn;
    file >> jsn;
    const auto& files = jsn["files"];
    for(const auto& f : files) {
      fileInfo fileObj;
      std::string paths = f;
      std::string names = fileObj.split(f,'/');
      fileObj.setPath(paths);
      fileObj.setName(names);
      file_vec.push_back(fileObj);
      paths.clear();
      names.clear();
    }
    file.close();
  } else {
    setError("не удалось считать JSON файл");
  }
}
