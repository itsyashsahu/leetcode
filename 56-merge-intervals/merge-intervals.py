class Solution:
    def merge(self, ins: List[List[int]]) -> List[List[int]]:
        n = len(ins)
        if n <=1:
            return ins
        ins.sort()
        ans = [ins[0]]

        for i in range(1,n):
            if ins[i][0]<= ans[-1][1]:
                if  ins[i][1]>ans[-1][1]:
                    ans[-1][1] = max(ans[-1][1],ins[i][1])
            else:    
                ans.append(ins[i])
        
        return ans
                
        
        