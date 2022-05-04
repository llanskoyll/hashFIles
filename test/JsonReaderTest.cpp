#include "gtest/gtest.h"
#include "jsonReader.h"



TEST(JsonReaderTest, json_test) {
  std::vector <fileInfo> file_vec;
  std::string count_name = "skanavi.pdf";
  std::string pathJSON = "/home/artem/Рабочий стол/project/test_task/src/listFiles.json";
  readJSON(pathJSON,file_vec);
  std::string count_file_name = "skanavi.pdf";
  ASSERT_EQ(count_name,count_file_name);
}
