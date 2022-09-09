class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        vector<int> ans;
        int x = 0, carry = 0;
        int l = d.size();
        while(l--){
            int sum = 0;
            if( l == d.size()-1 ){
                sum += d[l]+1;
            }else{
                sum += d[l]+carry;
            }
            x = ( sum)%10;
            carry = (sum)/10;
            ans.push_back(x);
        }
        if(carry)
            ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};