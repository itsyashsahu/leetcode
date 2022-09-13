class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size(), primary = 0, secondary = 0;
        
        for (int i = 0; i < n; i++) {
            primary += mat[i][i];
            secondary += i == n - 1 - i ? 0 : mat[i][n - 1 - i];
        }
        return primary + secondary;
    }
};