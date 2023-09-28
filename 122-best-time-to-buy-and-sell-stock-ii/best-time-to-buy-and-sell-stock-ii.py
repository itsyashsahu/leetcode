class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if len(prices)<2:
            return 0
        temp = []
        for i in range(len(prices)-1):
            temp.append(prices[i+1]-prices[i])
        
        def lcs(arr):
            sumi = 0
            for i in range(len(arr)):
                if arr[i]>=0:
                    sumi+=arr[i]
            return sumi
        ans = lcs(temp)
        if ans<0:
            return 0
        return ans