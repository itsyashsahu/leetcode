class Solution {
  bool pruneTreeHelper(TreeNode* n) {
    if(!n) return false;
    
    if(!pruneTreeHelper(n->right)) n->right = nullptr;
    if(!pruneTreeHelper(n->left)) n->left = nullptr;
    
    return n->right || n->left || n->val == 1;
  }
  
public:
  TreeNode* pruneTree(TreeNode* root) {
    if(!pruneTreeHelper(root)) return nullptr;
    return root;
  }
};