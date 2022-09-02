/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans=NULL;
    void helper(TreeNode* c,TreeNode* t){
        if( c == NULL || t==NULL ){
            return;
        }
        if( c->val == t->val)
            ans = c;
        else{
            if( c->left){
                helper(c->left,t);
            }

            if(c->right){
                helper(c->right,t);
            }
        }
    }
    TreeNode* getTargetCopy(TreeNode* o, TreeNode* c, TreeNode* t) {
        if( c == NULL || t == NULL ){
            return NULL;
        }
        helper(c,t);
        return ans;
    }
};