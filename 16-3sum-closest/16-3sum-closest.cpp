class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());        
        int ans = nums[0] + nums[1] + nums[2];
        for(int i = 0;i<n-2;i++)
        {
            int s=i+1 , e=n-1;
            while(s<e)
            {
                int sum = nums[i] + nums[s] + nums[e];
                if (abs(ans - target) > abs(sum - target)) 
                    ans = sum;
                if (sum == target) break;
                if (sum > target)
                    e--; 
                else
                    s++; 
            }
        }
        return ans;
    }
};