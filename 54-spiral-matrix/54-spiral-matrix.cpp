class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int N=n,M=m;
        int row=0,col=0;
        int i=0,bound=0;
        vector<int> spiral;
        while(i<N*M)
        {
            spiral.push_back(matrix[row][col]);
            if(row==bound && col<n-1) col++;
            else if(row<m-1 && col==n-1) row++;
            else if(row==m-1 && col>bound) col--;
            else if(row>bound+1) row--;
            else
            {
                bound++;
                m--;
                n--;
                row=col=bound;
            }
            i++;
        }
        return spiral;
    }
};