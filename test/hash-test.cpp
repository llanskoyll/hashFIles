#include "gtest/gtest.h"
#include "hash.h"
#include "fileInfo.h"

TEST(hashTest, hash_test_1) {
  std::string path = "/home/artem/Рабочий стол/project/test_task/exampleFiles/skanavi.pdf";
  std::string name = "test_1_Name";
  fileInfo file(name,path);
  std::vector <unsigned int> crc_table;
  createTable(crc_table);
  CRC32_count(file,crc_table);
  ASSERT_EQ(file.getHash(),541641503) << "Кэш файла неверен";
  }
