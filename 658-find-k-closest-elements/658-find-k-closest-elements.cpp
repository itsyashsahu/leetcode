class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
        if (k==arr.size()) return arr;

        sort(arr.begin(),arr.end(),[&](int &a,int &b){return(abs(a-x)<abs(b-x))||(abs(a-x)==abs(b-x)&&a<b);});
             
      int i=0;
      while(k--){ans.push_back(arr[i]);i++;}
      sort(ans.begin(),ans.end());
        
      return ans;
    }
};