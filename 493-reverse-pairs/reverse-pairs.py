class Solution:
    def reversePairs(self, nums: List[int]) -> int:
        ans =0
        def merge(l,mid,h):
            # nonlocal ans
            temp = []
            left = l
            right = mid+1
            while left<=mid and right <=h:
                if nums[left]<=nums[right]:
                    temp.append(nums[left])
                    left+=1
                else:
                    temp.append(nums[right])
                    right+=1

            while left<=mid:
                temp.append(nums[left])
                left+=1
            while right<=h:
                temp.append(nums[right])
                right+=1
                
            for i in range(l,h+1):
                nums[i]= temp[i-l]
        
        def countpairs(l,mid,h):
            right = mid+1
            nonlocal ans
            for i in range(l,mid+1):
                while right<=h and nums[i]>2*nums[right]:
                    right+=1
                ans += right-(mid+1)

        def mergeSort(l,h):
            if l>=h:
                return
            mid = (l+h)//2
            mergeSort(l,mid)
            mergeSort(mid+1,h)
            countpairs(l,mid,h)
            merge(l,mid,h)

        mergeSort(0,len(nums)-1)
        return ans
        