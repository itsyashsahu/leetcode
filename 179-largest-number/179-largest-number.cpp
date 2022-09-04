bool myCmp(string s1, string s2)
{
    return s1+s2>s2+s1;
}
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> t;
        string ans="";
        for( int i:nums){
            string s = to_string(i);
            t.push_back(s);
        }
        sort(t.begin(), t.end(), myCmp);
        bool isZero = true;
        for( string str : t){
            // cout<<str<<" ";
            if(str != "0")
                isZero = false;
            ans += str;
        }
        if(isZero)
            return "0";
        
        // cout<<endl;
        return ans;
    }
};