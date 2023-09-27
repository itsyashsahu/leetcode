class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        st = deque()
        for i in nums:
            st.appendleft(i)
        n = len(nums)
        ans = [-1]*n
        for i in range(n-1,-1,-1):
            if st:
                while st and st[-1]<=nums[i]:
                    st.pop()
                if st:
                    ans[i]=st[-1]
                st.append(nums[i])
            else:
                st.append(nums[i])
        
        return ans
        