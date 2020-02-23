#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HeightShould, HeightReturn) {
  BST tree;
  tree.push(10);
  tree.push(20);
  tree.push(2);
  tree.push(9);
  tree.push(0);
  tree.push(1);
  tree.push(11);
  tree.push(25);
  int actual = tree.findHeight();
  int expected = 4;
  EXPECT_EQ(expected, actual);
}

TEST(HeightShould_1, HeightReturn_1) {
  BST tree;
  int actual = tree.findHeight();
  int expected = 0;
  EXPECT_EQ(expected, actual);
}