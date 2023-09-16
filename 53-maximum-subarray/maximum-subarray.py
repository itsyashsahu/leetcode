class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        ans = -inf
        sumi = 0
        for num in nums:
            sumi +=num
            ans = max(ans,sumi)
            if sumi<0:
                sumi=0
        return ans 
        