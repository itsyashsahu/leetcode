class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = len(nums)
        cnt = 0
        el = None
        for i in range(len(nums)):
            if cnt ==0:
                cnt = 1
                el = nums[i]
            elif el == nums[i]:
                cnt+=1
            else:
                cnt-=1
        
        cnt1 = 0
        for num in nums:
            if num == el:
                cnt1 +=1
            
        if cnt1>n/2:
            return el
        return -1