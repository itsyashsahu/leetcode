class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int i=0;
        while((i+2)!=nums.size()){
            if( nums[i] < (nums[i+1]+nums[i+2]) ){
                return nums[i]+nums[i+1]+nums[i+2];
            }
            i++;
        }
        // int sum=nums[0]+nums[1]+nums[2];
        return 0;
    }
};