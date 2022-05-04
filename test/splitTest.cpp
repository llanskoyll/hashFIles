#include "gtest/gtest.h"
#include "fileInfo.h"

TEST(splitTest, split_test) {
  std::string name = "../test/test.txt";
  std::string checkName = "test.txt";
  std::string changeName;
  fileInfo file;
  changeName = file.split(name,'/');
  ASSERT_EQ(changeName,checkName);
}
