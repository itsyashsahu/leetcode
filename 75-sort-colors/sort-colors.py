class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        cnt0,cnt1,cnt2=0,0,0
        for num in nums:
            if num==0:
                cnt0+=1
            elif num==1:
                cnt1+=1
            elif num==2:
                cnt2+=1
        i = 0
        while cnt0>0:
            nums[i]=0
            cnt0-=1
            i+=1
        while cnt1>0:
            nums[i]=1
            cnt1-=1
            i+=1
        while cnt2>0:
            nums[i]=2
            cnt2-=1
            i+=1
