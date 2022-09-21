class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0; 
        int e=nums.size()-1;
        int mid = s + (e-s)/2;
        while( s<e){
            if( nums[0]<= nums[mid] ){
                s=mid+1;
            }else{
                e=mid;
            }
            mid = s+(e-s)/2;
        }
        if( s == nums.size()-1){
            if( nums[s]<nums[0] )
                return nums[s];
            return nums[0];
        }
        return nums[s];
    }
};