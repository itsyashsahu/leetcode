class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        n = len(nums)
        for i in range(n):
            if nums[abs(nums[i])-1]<0:
                return abs(nums[i])
            else:
                nums[abs(nums[i])-1] *= (-1)
        return -1

