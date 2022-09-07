/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    string ans;
    void helper(TreeNode* root){
        if(root->left==NULL&&root->right==NULL){
            ans+=to_string(root->val);
            return;
        }
        ans+=to_string(root->val);
        ans +="(";
        if(root->left){
            helper(root->left);
        }
        ans +=")";
        if(root->right){
            ans +="(";
            helper(root->right);
            ans +=")";
        }
        
    }
    string tree2str(TreeNode* root) {
        helper(root);
        // cout<<endl;
        return ans;
    }
};