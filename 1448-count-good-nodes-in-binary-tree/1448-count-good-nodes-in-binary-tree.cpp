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
    int count = 0;
    // int max=INT_MIN;
    int prev_max = INT_MIN;
    void recv( TreeNode *root,int max){
        if( root== NULL ){
            return;
        }
        // prev_max = max;
        if( root->val >= max ){
            max = root->val;
            count++;
        }
        // if(root->left==NULL || root->right==NULL)
        // {
        //     max = prev_max;
        // }
        // cout<<root->val<<" , "<<max<<endl;
        recv(root->left,max);
        recv(root->right,max);
    }
    int goodNodes(TreeNode* root) {
        int ans = 0;
        // max = root->val;
        prev_max = root->val;
        recv(root,INT_MIN);
        return count;
    }
};