#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BST
{
public:
  BST() {
    root_ = nullptr;
  }

  BST(std::vector<int> initial_values) {
    for (unsigned int i = 0; i < initial_values.size(); i++)
      push(initial_values[i]);
  }

  ~BST() {
    root_ = nullptr;
  }

  void push(int key);
  bool find(int key);
  bool erase(int key);

  /* Helper functions */
  TreeNode* pushNode(TreeNode* node, int key);
  TreeNode* findNode(TreeNode* node, int key);
  TreeNode* eraseNode(TreeNode* node, int key);
  TreeNode* minNode(TreeNode* node);
  void Inorder();
  void InorderBST(TreeNode* node);
  std::vector<int> LevelOrder();
  int findHeight();
  int findHeightNode(TreeNode *node);

private:
  TreeNode *root_;
};

#endif