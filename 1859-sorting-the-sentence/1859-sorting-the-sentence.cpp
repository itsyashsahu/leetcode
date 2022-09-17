class Solution {
public:
    string sortSentence(string s) {
        char del = ' ';
        stringstream ss(s);
        string word;
        map<int,string>m;
        while (!ss.eof()) {
            getline(ss, word, del);
            char c = word[ word.size()-1 ];
            m[ c -'0'] = word;
        }
        string ans = "";
        int i=0;
        for( auto it:m){
            i++;
            it.second.pop_back();
            if(i==m.size()){
                ans+=it.second;
                continue;
            }
            ans = ans+it.second+" ";
        }
        return ans;
    }
};