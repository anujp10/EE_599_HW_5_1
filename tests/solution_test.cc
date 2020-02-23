#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(LevelOrderShould, LevelOrderReturn) {
  std::vector<int> input = {10, 20, 2, 9, 0, 1, 11, 25};
  BST tree;
  tree.push(10);
  tree.push(20);
  tree.push(2);
  tree.push(9);
  tree.push(0);
  tree.push(1);
  tree.push(11);
  tree.push(25);
  std::vector <int> actual = tree.LevelOrder();
  std::vector <int> expected = {10, 2, 20, 0, 9, 11, 25, 1};
  EXPECT_EQ(expected, actual);
}

TEST(LevelOrderShould_1, LevelOrderReturn_1) {
  BST tree;
  std::vector <int> actual = tree.LevelOrder();
  std::vector <int> expected = {};
  EXPECT_EQ(expected, actual);
}