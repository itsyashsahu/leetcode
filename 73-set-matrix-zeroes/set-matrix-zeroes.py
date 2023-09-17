class Solution:
    def setZeroes(self, mat: List[List[int]]) -> None:
        # col0 = 1
        m = len(mat)
        n = len(mat[0])
        row = []
        col = []
        for i in range(m):
            for j in range(n):
                if mat[i][j]==0:
                    row.append(i)
                    col.append(j)
        
        for r in row:
            for i in range(n):
                mat[r][i]=0
        for c in col:
            for i in range(m):
                mat[i][c]=0
                