class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int> ssum,lsum;
        int stsum=0,lasum=0;
        for(int x:nums){
            stsum+=x;
            ssum.push_back(stsum);
        }
        for(int i=nums.size()-1; i>=0; i--){
            lasum+=nums[i];
            lsum.push_back(lasum);
        }
        // cout<<lasum<<" "<<stsum<<endl;
        for( int i=0; i<nums.size(); i++){
            // cout<<ssum[i]<<"  "<<lsum[i]<<endl;
            if(ssum[i] == lsum[nums.size()-1-i])
                return i;
        }
        return -1;
    }
};