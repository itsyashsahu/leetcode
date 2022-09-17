class Solution {
public:
    bool areNumbersAscending(string s) {
        int min = INT_MIN;
        char del = ' ';
        stringstream ss(s);
        string word;
        bool ans = true;
        while (!ss.eof()) {
            getline(ss, word, del);
            bool num = true;
            for( char c : word ){
                if( c>='0' && c<='9'){
                    num = true;
                }else{
                    num = false;
                    continue;
                }
            }
            if(num){
                int no = stoi(word);
                if(min<no){
                    min = no;
                }else{
                    ans = false;
                    return false;
                }
            }
        }
        return ans;
        
    }
};