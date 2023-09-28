class Solution:
    def setZeroes(self, mat: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        col0=1
        m = len(mat)
        n = len(mat[0])
        for i in range(m):
            for j in range(n):
                if mat[i][j]==0:
                    if i==0:
                        col0=0
                    else:
                        mat[i][0]=0
                        mat[0][j]=0

        for i in range(1,m):
            for j in range(1,n):
                if mat[i][0]==0 or mat[0][j]==0:
                    mat[i][j]=0
        if mat[0][0]==0:
            for i in range(m):
                mat[i][0]=0
        if col0==0:
            for i in range(n):
                mat[0][i]=0
        
                    

