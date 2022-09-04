class Solution {
public:
    vector<int> getRow(int tr) {
        vector<vector<int>> v;
        v.push_back({1}); // first row
        v.push_back({1,1}); // second row
        
        if( tr <2 )
            return v[tr];
        
        for( int i=2; i<=tr; i++){
            vector<int> t;
            t.push_back(1);
            for( int j=1;j<v[i-1].size(); j++){
                t.push_back( v[i-1][j-1] + v[i-1][j] );
            }
            t.push_back(1);
            v.push_back(t);
        }
        return v[tr];
    }
};