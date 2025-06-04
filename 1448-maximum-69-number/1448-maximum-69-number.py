class Solution:
    def maximum69Number (self, num: int) -> int:
        k=list(str(num))
        if '6' not in k:
            return num
        else:
            for i in range(len(k)):
                if k[i]=='6':
                    k[i]='9'
                    break
        result="".join(k)
        return int(result)
        
        