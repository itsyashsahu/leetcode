class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0;
        for( int i=1; i<points.size();i++){
            int count= 0;
            int diffX = abs(points[i][0]-points[i-1][0]);
            int diffY = abs(points[i][1] -points[i-1][1]);
            // cout<<diffX<<"  "<<diffY<<endl;
            while( diffX >0 && diffY > 0 ){
                count++;
                diffX--;
                diffY--;
            }

            if( diffX )
                count+=diffX;
            
            if( diffY )
                count+=diffY;
            ans +=count;
        }
        return ans;
    }
};