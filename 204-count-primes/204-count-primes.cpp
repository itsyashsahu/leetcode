class Solution {
public:
    int countPrimes(int n) {
        if(n==0)
            return 0;
        int arr[n];
        memset(arr,0,sizeof(arr));
        
        for( int i=2; i<sqrt(n); i++ ){
            for( int j=2; i*j<n; j++){
                arr[i*j] = 1;
            }
        }
        int count=0;
        for( int i=2;i<n; i++){
            if(arr[i] == 0){
                // cout<<i<<" ";
                count++;
            }
        }
        // cout<<endl;
        return count;
    }
};