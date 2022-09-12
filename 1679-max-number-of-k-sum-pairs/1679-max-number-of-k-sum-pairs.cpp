class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int> m;
        for( int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        long long int count=0; 
        for( auto it = m.begin(); it != m.end(); ++it ){
            // cout << it->first << endl;
            if( m[k-(it->first)]>0 && m[it->first] > 0 ){
                count += min( m[k-(it->first)],m[it->first] );
            }
        }
        return count/2;
    }
};