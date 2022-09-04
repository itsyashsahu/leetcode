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
    map<pair<int,int>,vector<int> > m;
    void helper(TreeNode*root,int r, int c){
        if(root==NULL){
            return;
        }
        m[{r,c}].push_back(root->val);
        helper( root->left, r+1,c-1);
        helper( root->right, r+1,c+1);
        
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        helper(root,0,0);
        vector<vector<int>> ans;
        map<int,vector<int>> mp;
        for( auto it:m){
            // vector<int> temp;
            // cout<<it.first.first<<"  "<<it.first.second<<endl;
            
            if( it.second.size()> 1){
                sort(it.second.begin(),it.second.end());
            }
            
            for( int i: it.second ){
                // cout<<i<<"  ";
                mp[it.first.second].push_back(i);
            }
            // cout<<endl;
        }
        
        for( auto it:mp){
            vector<int> temp;
            ans.push_back(it.second);
        }
        return ans;
    }
};