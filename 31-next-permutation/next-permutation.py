class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        l = len(nums)
        idx = -1 
        for i in range(l-1,0,-1):
            if nums[i] > nums[i-1]:
                idx = i-1
                break
        if idx != -1:
            for i in range(l-1,idx,-1):
                if nums[idx]< nums[i]:
                    nums[idx],nums[i] = nums[i],nums[idx]
                    break
            nums[idx+1:] = sorted(nums[idx+1:])
        else:
            nums.reverse()

        