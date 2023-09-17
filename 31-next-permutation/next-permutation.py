class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        idx = -1
        for i in range(n-1,0,-1):
            # print("i -- ",i)
            if nums[i]>nums[i-1]:
                # print(f"milla -{i}")
                idx = i-1
                break
        # print(idx)
        if idx == -1:
            nums.reverse()
        else:
            for i in range(n-1,0,-1):
                if nums[idx]<nums[i]:
                    nums[i],nums[idx] = nums[idx],nums[i]
                    nums[idx+1:] = sorted(nums[idx+1:])
                    break
            
        