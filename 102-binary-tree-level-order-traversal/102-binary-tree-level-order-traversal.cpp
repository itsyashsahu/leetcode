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
    vector<vector<int>> ans;
    void bfs(TreeNode* root){
        if( root == NULL)
            return;
        queue<TreeNode*> q;
        q.push(root);
        while( !q.empty() ){
            int s = q.size();
            vector<int> t;
            for( int i=0; i<s; i++){
                TreeNode* temp = q.front();
                q.pop();
                t.push_back( temp->val);
                if( temp->left)
                    q.push(temp->left);
                if( temp->right)
                    q.push(temp->right);
            }
            ans.push_back(t);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        bfs(root);
        return ans;
    }
};