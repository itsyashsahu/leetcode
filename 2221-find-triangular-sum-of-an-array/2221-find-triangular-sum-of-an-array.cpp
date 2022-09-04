class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while( nums.size() != 1 ){
            vector<int> t;
            for( int i=1; i<nums.size(); i++){
                t.push_back( (nums[i] + nums[i-1] )%10 );
            }
            nums = t;
        }
        return nums[0];
    }
};