class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int i=0,j=tokens.size()-1;
        int s = 0;
        sort(tokens.begin(),tokens.end());
        for(;i<tokens.size() && j>=0; i++){
            // cout<<i<<" "<<j<<endl;
            if(power<tokens[i] && power+tokens[j]>tokens[i] && s>0){
                power+=tokens[j];
                j--;
                s--;
                // cout<<power<<" elif "<<tokens[i]<<"  "<<s<<endl;
            }
            if(power >= tokens[i]){
                power -=tokens[i];
                s++;
                // cout<<power<<"  "<<tokens[i]<<"  "<<s<<endl;
            }
        }
        return s;
    }
};