#include <iostream>
#include <fstream>
#include <vector>
#include "json.hpp"

using json = nlohmann::json;
void readJSON(std::string &pathJSON, std::vector<std::string> &pathFiles);
