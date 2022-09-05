/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> ans;
    void bfs( Node* root){
        if(root==NULL)
            return;
        queue <Node*> q;
        q.push(root);
        while(!q.empty()){
            int s = q.size();
            vector<int> t;
            for( int i=0; i<s; i++){
                Node* temp = q.front();
                q.pop();
                t.push_back(temp->val);
                if( temp->children.size() != 0){
                    for( Node* it : temp->children){
                        q.push(it);
                    }
                }
            }
            ans.push_back(t);
        }
        
        
    }
    vector<vector<int>> levelOrder(Node* root) {
        bfs(root);
        return ans; 
    }
};