class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        n = len(nums)
        if n ==1:
            return 0
        elif nums[0]>nums[1]:
            return 0
        elif nums[-1]>nums[-2]:
            return n-1
        else:
            s=1
            e = len(nums)-2
            while s<e:
                m = (s+e)//2
                if nums[m]>nums[m+1] and nums[m]>nums[m-1]:
                    return m
                elif nums[m]>nums[m-1]:
                    s = m+1
                else:
                    e = m-1
            return e