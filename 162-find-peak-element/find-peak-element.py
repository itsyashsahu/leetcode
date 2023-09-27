class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        
        nums.append(-inf)
        for i in range(len(nums)):
            if i ==0 :
                if nums[i+1]<nums[i]:
                    return i
            else:
                if nums[i+1]<nums[i] and nums[i-1]<nums[i]:
                    return i
        return -1
        