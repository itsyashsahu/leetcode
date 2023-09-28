class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        def max_subarray_sum(arr):
            ans = arr[0]
            sumi = arr[0]
            ts = 0 
            s = 0 
            e = 0
            for i in range(1,len(arr)):
                if arr[i]>sumi+arr[i]:
                    ts=i
                    sumi = arr[i]
                else:
                    sumi +=arr[i]
                
                if sumi>ans:
                    s = ts
                    e = i
                    ans = sumi
            print(s,e)
            return sum(arr[s:e+1])
        
        c = max_subarray_sum(nums)
        print("c -- ",c)
        return c
        # return sum(max_subarray_sum(nums))