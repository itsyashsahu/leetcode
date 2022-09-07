class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int gmax = nums[0];
        int lmax = nums[0];
        
        for( int i=1; i<nums.size();i++){
            lmax=max(nums[i], lmax+nums[i]);
            gmax=max(lmax,gmax);
        }
        return gmax;
    }
};