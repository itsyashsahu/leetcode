class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        if m==1 or n==1:
            return 1
        dp = [ [-1]*n for _ in range(m)]
        def solve(i,j):
            if dp[i][j]!=-1:
                return dp[i][j]
            if i == m-1 and j == n-1:
                return 0
            elif i == m-1 or j == n-1:
                return 1
            dp[i][j] = solve(i+1,j)+solve(i,j+1)
            return dp[i][j]
        return solve(0,0)