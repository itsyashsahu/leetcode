class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<int> > m; 
        for( int i=0; i< strs.size(); i++ ){
            
            string sortedString = strs[i];
            sort( sortedString.begin(),sortedString.end() );
            m[ sortedString ].push_back( i );
        }
        
         vector<vector<string>> ans;
        for( auto &map : m ){
            vector<string> temp;
            for( auto &index : map.second ){
                temp.push_back( strs[ index ] );
                //cout<<index<<" ";  
            }
            //cout<<endl;
            ans.push_back( temp );
            temp.clear();
        }
        return ans;
    }
};