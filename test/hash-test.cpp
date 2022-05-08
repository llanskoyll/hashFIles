#include "gtest/gtest.h"
#include "hash.h"
#include "fileInfo.h"

TEST(hashTest, hash_test_1) {
  std::string path = "/home/artem/Рабочий стол/project/test_task/exampleFiles/skanavi.pdf";
  std::string name = "test_1_Name";
  fileInfo file;
  file.setName(name);
  file.setPath(path);
  CRC32_count(file);
  ASSERT_EQ(file.getHash(),541641503) << "Кэш файла неверен";
  }
