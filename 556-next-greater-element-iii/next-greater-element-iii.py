class Solution:
    def nextGreaterElement(self, n: int) -> int:
        nums = []
        n1 = n
        while n1>0:
            nums.append(n1%10)
            n1 = n1//10
        nums.reverse()
        point = -1
        n2 = len(nums)
        for i in range(n2-2,-1,-1):
            if nums[i]<nums[i+1]:
                point=i
                break

        if point ==-1:
            return -1
        else:
            print(nums[point])
            for i in range(n2-1,-1,-1):
                if nums[point]<nums[i]:
                    nums[i],nums[point] = nums[point],nums[i]
                    nums[point+1:] = sorted(nums[point+1:])
                    break
            ans = int(''.join(map(str, nums)))
            if ans<=2147483647 and ans>=-2147483648:
                return ans
            else:
                return -1
            return -1
        
        return -1