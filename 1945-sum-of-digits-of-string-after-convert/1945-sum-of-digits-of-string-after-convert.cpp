class Solution {
public:
    int getLucky(string s, int k) {
        string num="";
        int n=0;
        for(int i=0; i<s.size(); i++)
        {
            num+=to_string(s[i]-'a'+1);
        }
        while(k)
        {
            n=0;
            for(auto c:num)
            {
                n+=c-'0';
            }
            num = to_string(n);
            k--;
        }
        return n;
    }
};