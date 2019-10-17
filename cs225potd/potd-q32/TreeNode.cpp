#include "TreeNode.h"
#include <algorithm>
#include <queue>

int getHeight(TreeNode* curNode) {
  if (curNode == NULL) {
    return -1;
  }
  return 1 + std::max(getHeight(curNode->left_), getHeight(curNode->right_));
}

int getBalance(TreeNode* curNode) {
  return getHeight(curNode->left_) - getHeight(curNode->right_);
}

TreeNode* findLastUnbalanced(TreeNode* root) {
  TreeNode* answer = NULL;
  TreeNode* curr;
  int tempBalance;

  std::queue<TreeNode*> temp;
  temp.push(root);

  while (!temp.empty()) {
    curr = temp.front();
    temp.pop();
    tempBalance = getBalance(curr);

    curr->balance_ = tempBalance;
    if (tempBalance >= 2 || tempBalance <= -2) {
      answer = curr;
    }

    if (curr->left_ != NULL) {
      temp.push(curr->left_);
    }
    if (curr->right_ != NULL) {
      temp.push(curr->right_);
    }
  }

  return answer;
}

void deleteTree(TreeNode* root) {
  if (root == NULL)
    return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}
