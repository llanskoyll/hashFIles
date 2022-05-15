#include "jsonReader.h"
#include "stringFunction.h"

void readJSON(std::string path_JSON, std::vector<fileInfo> &file_vec) {
  
  std::ifstream file(path_JSON);

  try 
  {
    
    if(!file.is_open()) { throw "Не удалось считать JSON файл";}

    json jsn;
    file >> jsn;
    const auto& files = jsn["files"];

    for(const auto& f : files) {
      std::string paths = f;
      std::string names = split(f,'/');
      fileInfo fileObj(names,paths);
      file_vec.push_back(fileObj);
    }

    file.close();

  } catch (const char *ex) {

    setError(ex);
    
  }

}
