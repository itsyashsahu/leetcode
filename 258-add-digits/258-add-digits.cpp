class Solution {
public:
    int addDigits(int num) {
        int sum =0;
        do{
            sum =0;
            while(num > 0){
                sum= sum+ (num%10);
                // cout<<num%10<<endl;
                num/=10;
            }
            num = sum;
        }while( sum >9 );
        return sum;
    }
};