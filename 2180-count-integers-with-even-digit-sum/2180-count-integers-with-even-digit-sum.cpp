class Solution {
public:
    bool evenDigitSum(int n){
        int sum =0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        if(sum%2==0)
            return true;
        return false;
    }
    int countEven(int num) {
        int i=2,count=0;
        for(;i<=num; i++){
            if(evenDigitSum(i))
                count++;
        }
        return count;
    }
};