class Solution:
    def myPow(self, x: float, n: int) -> float:
        ans = 1.0
        
        ni = n
        if ni<0:
            ni *= (-1)     

        while ni>0:
            if ni%2 == 1:
                ans = ans*x
                ni = ni-1
            else:
                x = x*x
                ni = ni//2

        if n<0:
            ans = 1.0/ans
        return ans

        