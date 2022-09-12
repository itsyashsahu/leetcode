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
                // cout << k-(it->first) << " " << it->first << " " << min( m[k-(it->first)],m[it->first] ) << endl;
                cout << count << endl;
                count += min( m[k-(it->first)],m[it->first] );
                
                // if( k-it->first == it->first ){
                //     if( m[it->first]>=2){
                //         count+= m[it->first]/2;
                //         m[k-it->first]-= m[it->first]*count ;
                //         m[it->first]-= m[it->first]*count;
                //     }
                // }else{
                //     m[k-it->first]--;
                //     m[it->first]--;
                //     count++;
                // }
            }
        }
        return count/2;
    }
};