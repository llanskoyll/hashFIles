#pragma once

#include "json.hpp"
#include "fileInfo.h"
#include "error.h"

#include <sstream>
#include <iostream>
#include <fstream>
#include <vector>

using json = nlohmann::json;
void readJSON(std::string &pathJSON, std::vector<fileInfo> &file_vec);
