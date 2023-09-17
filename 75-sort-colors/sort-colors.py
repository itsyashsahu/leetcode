class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        cnt0,cnt1,cnt2 = 0,0,0

        for n in nums:
            if n ==0:
                cnt0+=1
            elif n ==1:
                cnt1+=1
            elif n ==2:
                cnt2+=1
        
        for i in range(len(nums)):
            if cnt0:
                nums[i]=0
                cnt0-=1
            elif cnt1:
                nums[i]=1
                cnt1-=1
            elif cnt2:
                nums[i]=2
                cnt2-=1