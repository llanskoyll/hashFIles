#include "json.hpp"
#include "TrappingError.h"

#include <iostream>
#include <fstream>
#include <vector>

using json = nlohmann::json;
void readJSON(std::string &pathJSON, std::vector<std::string> &pathFiles);
