class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
        vector<bool>isEven;
        vector<int> ans;
        int sum=0;
        for( int i=0; i<nums.size(); i++)
        {
            if(nums[i]%2 == 0){
                sum+=nums[i];
                isEven.push_back(true);
            }else{
                isEven.push_back(false);
            }
        }
        // cout<<sum<<endl;
        for( int i=0; i<q.size();i++){
            if(isEven[q[i][1]]){
                sum-=nums[ q[i][1] ];
                if((nums[ q[i][1] ]+q[i][0])%2==0){
                    sum+=nums[ q[i][1] ]+q[i][0];
                    isEven[ q[i][1] ]=true;
                }else{
                    isEven[ q[i][1] ]=false;
                }
                nums[ q[i][1] ]+=q[i][0];
            }else{
                if((nums[ q[i][1] ]+q[i][0])%2==0){
                    sum+=nums[ q[i][1] ]+q[i][0];
                    isEven[ q[i][1] ]=true;
                }else{
                    isEven[q[i][1] ]=false;
                }
                nums[q[i][1]]+=q[i][0];
            }
            ans.push_back(sum);
        }
        return ans;
        
    }
};