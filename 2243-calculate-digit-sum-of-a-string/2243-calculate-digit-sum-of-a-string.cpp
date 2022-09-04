class Solution {
public:
    string digitSum(string s, int k) {
        while( s.length() > k){
            vector<string>t;
            int i=0;
            for( ; i<s.length(); i+=k){
                // cout<<s.substr(i,k)<<" ";
                t.push_back(s.substr(i,k));
            }
            string str = "";
            for( string s1 : t ){
                long long int sum =0;
                // cout<<" s1 -> "<<s1<<endl;
                for( char c :s1){
                    int x = int(c -48);
                    sum+=x;
                }
                // cout<<sum<<endl;
                str+=to_string(sum);
            }
            // cout<<str<<" str "<<endl;
            s = str;
        }
        return s;
    }
};