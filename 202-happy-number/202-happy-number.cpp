class Solution {
public:
    bool isHappy(int n) {
        if(n==1)
            return true;
            
        int sum =0;
        unordered_set<int> st;
        
        while(sum != 1 ){
            if (st.find(n) != st.end()) {
                return false;
                break;
            }
            vector<int> d;
            st.insert(n);
            while( n > 0){
                d.push_back(n%10);
                // cout<<n%10<<"  ";
                n/=10;
            }
            // cout<<endl;
            sum=0;
            for( int i : d){
                sum += i*i;
            }
            n = sum;
            // cout<<sum<<endl;
        }
        return true;
    }
};