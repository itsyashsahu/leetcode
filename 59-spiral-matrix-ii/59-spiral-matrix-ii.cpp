class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> mat;
        int N=n,M=n;
        int row=0,col=0;
        int i=0,bound=0;
        vector<int> spiral;
        
        for( int k =0; k<n; k++){
            vector<int> temp;
            for( int l=0; l<n; l++){
                temp.push_back(0);
            }
            mat.push_back(temp);
        }
        
        while(i<n*n)
        {
            
            mat[row][col] = i+1;
            if(row==bound && col<N-1) col++;
            else if(row<M-1 && col==N-1) row++;
            else if(row==M-1 && col>bound) col--;
            else if(row>bound+1) row--;
            else
            {
                bound++;
                M--;
                N--;
                row=col=bound;
            }
            i++;
        }
        return mat;
    }
};