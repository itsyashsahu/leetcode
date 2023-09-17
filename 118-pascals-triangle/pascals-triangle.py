class Solution:
    def generate(self, n: int) -> List[List[int]]:
        ans = []
        for l in range(n):
            temp = []
            for r in range(l+1):
                temp.append(comb(l,r))
            ans.append(temp)
        return ans