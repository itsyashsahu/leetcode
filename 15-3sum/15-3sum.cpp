class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        int l,r;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-2; i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            l=i+1;r=nums.size()-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(sum==0)
                    ans.insert({nums[i],nums[l],nums[r]});
                if(sum<=0)
                    l++;
                else
                    r--;
            }
        }
        vector<vector<int>> ans_;
        for(auto i: ans)
            ans_.push_back(i);
        return ans_;
    }
};