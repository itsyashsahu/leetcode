class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int i=0;
        int min = INT_MAX;
        int j=0;
        sort(nums.begin(),nums.end());
        for( ; i<nums.size(); i++){
            if( min >= abs(nums[i])){
                min = abs(nums[i]);
                j=i;
            }
        }
        return nums[j];
    }
};