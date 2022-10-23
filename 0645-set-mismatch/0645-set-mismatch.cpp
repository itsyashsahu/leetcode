class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int x,y;
        map<int,int>m;
        for( int i=0;i<nums.size(); i++){
            // if(i+1!=nums[i]){
            //     ans.push_back(nums[i]);
            //     ans.push_back(i+1);
            //     break;
            // }
            m[nums[i]]++;
        }
        
        for(int i=1; i<=nums.size();i++){
            if(m[i] == 2)x=i;
            if(m[i] == 0)y=i;
        }
        // vector<int> ans={x,y};
        // return ans;
        return {x,y};
    }
};