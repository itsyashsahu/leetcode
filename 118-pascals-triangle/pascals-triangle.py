class Solution:
    def generate(self, n: int) -> List[List[int]]:
        ans = []
        for l in range(1,n+1):
            temp = []
            t = 1
            temp.append(1)
            for r in range(1,l):
                t =(t*(l-r))//r
                # t = t//r 
                temp.append(t)
            ans.append(temp)
        return ans