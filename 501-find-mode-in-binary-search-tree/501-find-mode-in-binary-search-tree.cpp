
class Solution {
public:
    map<int,int> m;
    void helper(TreeNode* root){
        if(root == NULL )
            return;
        m[root->val]++;
        if(root->left)
            helper(root->left);
        if(root->right)
            helper(root->right);
        
    }
    vector<int> findMode(TreeNode* root) {
        helper(root);
        vector<int> ans;
        int maxFreq = 0;
        for(auto it : m){
            if(maxFreq < it.second)
                maxFreq = it.second;
        }
        for(auto it : m){
            if(maxFreq == it.second)
                ans.push_back(it.first);
        }
        return ans;
    }
};