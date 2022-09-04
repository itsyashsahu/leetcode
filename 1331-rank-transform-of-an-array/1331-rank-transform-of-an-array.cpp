class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans;
        map<int,int> m;
        for( int i=0; i<arr.size(); i++){
            m[arr[i]] = i+1;
        }
        
        int count=0;
        int j=0;
        for( auto it : m){
            count++;
            m[it.first] = count;
        }
        
        for( int i=0; i<arr.size(); i++){
            ans.push_back(m[arr[i]]);
        }
        
        return ans;
    }
};