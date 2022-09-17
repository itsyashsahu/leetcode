class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int sign=0;
        long ans=0;
        while(i<s.size() && s[i]==' ') i++;
        
        if(s[i]=='-') sign=1;
        
        i=(s[i]=='+' || s[i]=='-')?i+1:i;
        while(i<s.size()){
            
            if(!(s[i]-'0'>=0 && s[i]-'0'<=9)) break;
            
            else{
                ans=ans*10+s[i]-'0';
                if(ans>INT_MAX){
                    return sign==0?INT_MAX :INT_MIN;
                }
                i++;
            }
        }
        if(ans>0){
            return sign==1 ? -1*ans : ans;
        }
        return ans;
    }
};