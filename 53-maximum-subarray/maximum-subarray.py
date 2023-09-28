class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        def max_subarray_sum(arr):
            ans = -inf
            sumi = 0
            s = 0 
            e = 0
            for i in range(len(arr)):
                if arr[i]>sumi+arr[i]:
                    s=i
                    sumi = arr[i]
                else:
                    sumi +=arr[i]
                
                if sumi>ans:
                    e = i
                    ans = sumi
            print(s,e)
            return ans
        
        c = max_subarray_sum(nums)
        print("c -- ",c)
        return c
        # return sum(max_subarray_sum(nums))