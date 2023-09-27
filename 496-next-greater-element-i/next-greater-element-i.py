class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        st = []
        n = len(nums2)
        nxt = [-1]*n
        d = defaultdict(lambda:-1)
        for i in range(n-1,-1,-1):
            if st:
                while st and st[-1]<nums2[i]:
                    st.pop()
                if st:
                    d[nums2[i]]=st[-1]    
                st.append(nums2[i])
            else:
                st.append(nums2[i])

        ans = []
        for i in nums1:
            ans.append(d[i])
        return ans

        
        