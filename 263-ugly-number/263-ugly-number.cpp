class Solution {
public:
    vector<int> f;
    void getPrimefactors(int n){
        while(n%2 == 0){
            f.push_back(2);
            n=n/2;
        }
        
        for( int i=3; i<=sqrt(n); i+=2){
            while(n%i == 0){
                f.push_back(i);
                n=n/i;
            }
        }
        if (n > 2)
            f.push_back(n);
        
    }
    bool isUgly(int n) {
        if(n<1)
            return false;
        getPrimefactors(n);
        bool ans = true;
        for( int i : f ){
            if( !(i == 2 || i==3 || i==5)){
                return false;
            }
        }
        cout<<endl;
        return true;
    }
};