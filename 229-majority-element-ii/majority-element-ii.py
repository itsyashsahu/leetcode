class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        ans = []
        n = len(nums)

        cnt1 = 0
        el1 = +inf
        cnt2 = 0
        el2 = +inf

        for num in nums:

            if num == el1:
                cnt1+=1
            elif num == el2: 
                cnt2 +=1
            elif cnt1 == 0 and num != el2 :
                el1 = num
                cnt1=1
            elif cnt2 == 0 and num != el1:
                el2 = num
                cnt2=1
            else:
                cnt1-=1
                cnt2-=1
        # print(f" {el1} {cnt1}  ==  {el2} {cnt2}")

        acnt1 = 0
        acnt2 = 0
        for num in nums:
            if el1 == num:
                acnt1+=1
            elif el2 == num:
                acnt2+=1

        if acnt1 > n//3:
            ans.append(el1)
        if acnt2 > n//3:
            ans.append(el2)
        return ans