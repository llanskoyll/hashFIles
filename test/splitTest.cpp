#include "gtest/gtest.h"
#include "stringFunction.h"

TEST(splitTest, split_test) {
  std::string name = "../test/test.txt";
  std::string checkName = "test.txt";
  std::string changeName;
  changeName = split(name,'/');
  ASSERT_EQ(changeName,checkName);
}
