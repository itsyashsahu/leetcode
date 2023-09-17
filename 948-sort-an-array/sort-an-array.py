class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        def merge(arr, l, mid, h ):
            left = l
            right = mid+1
            temp = []
            while left<=mid and right <=h:
                if arr[left]<=arr[right]:
                    temp.append(arr[left])
                    left+=1
                else:
                    temp.append(arr[right])
                    right+=1
            
            while left<=mid:
                temp.append(arr[left])
                left+=1
            
            while right<=h:
                temp.append(arr[right])
                right+=1

            for i in range(l,h+1):
                arr[i]= temp[i-l]
                

        def mergeSort(arr,l,h):
            if l>=h:
                return
                
            mid = (l+h)//2
            mergeSort(arr,l,mid)
            mergeSort(arr,mid+1,h)

            merge(arr, l,mid,h)
        mergeSort(nums,0,len(nums)-1)
        return nums