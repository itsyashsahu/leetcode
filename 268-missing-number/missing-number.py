class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        pred_sum = (n*(n+1))//2
        sumi = sum(nums)
        return pred_sum - sumi