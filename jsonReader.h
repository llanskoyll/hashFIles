#include <iostream>
#include <fstream>
#include "json.hpp"

using json = nlohmann::json;
void readJSON(std::string &pathJSON, std::vector<std::string> pathFiles);
