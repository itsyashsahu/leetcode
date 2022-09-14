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
    map<int,int>m;
    int count =0;
    void dfs(TreeNode* root,int h){
        if(root== NULL )
            return;
        if(root->left==NULL && root->right==NULL ){
            m[root->val]++;
            int even = 0;
            int odd = 0;
            // cout<<root->val<<"  h-> "<<h<<endl;
            for( auto it : m){
                // cout<<it.first<<" it "<<it.second<<endl;
                if( it.second %2 == 0)even++;
                else odd++;
            }
            // cout<<"even -- "<<even<<" "<<odd<<endl;
            if(h%2 ==0){
                if(odd==0)count++;
            }else{
                if( odd == 1 )count++;
            }
            m[root->val]--;
            return;
        }
        
        m[root->val]++;
        dfs(root->left,h+1);
        dfs(root->right,h+1);
        m[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        dfs(root,1);
        // cout<<"count : "<<count<<endl;
        return count;
    }
};