class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> s;
        vector<int> ans;
        for(int x : nums){
            int sz = s.size();
            s.insert(x);
            if(sz != s.size())ans.push_back(x);
        }
        int size = s.size();
        int stn=size;
        for( int i=0; i<ans.size(); i++){
            // cout<<x<<endl;
            nums[i] = ans[i];
            // size--;
        }
        return stn;
    }
};