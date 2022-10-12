class Solution {
public:
    bool check(vector<int>& nums) {
        int pair =0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]>nums[i])pair++;
        }
        if(nums[nums.size()-1]>nums[0])pair++;
        // cout<<pair<<endl;
        if(pair==1)
            return true;
        if(pair == 0)return true;
        return false;
        // return pair<=1;
    }
};