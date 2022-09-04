class Solution {
public:
    long long smallestNumber(long long num) {
        if (num == 0)
            return 0;
        vector<int> t;
        bool isNeg = false;
        if( num < 0){
            isNeg = true;
            num = -1*num;
        }
        long long temp = num;
        int count =0;
        while( temp !=0 ){
            if( temp%10 == 0 ){
                count++;
            }
            t.push_back(temp%10);
            temp/=10;
        }
        if(isNeg){
            sort(t.begin(),t.end(),greater<int>());
        }else{
            sort(t.begin(),t.end());
            swap(t[0], t[count]);    
        }
        
        long long ans=0;
        for( int i : t){
            ans += i;
            ans *=10;
        }
        ans /=10;
        
        if(isNeg)
            ans = -1*ans;
        
        return ans;
    }
};