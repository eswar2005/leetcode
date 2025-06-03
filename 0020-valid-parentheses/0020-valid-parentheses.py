class Solution:
    def isValid(self, s: str) -> bool:
        l=[]
        d={')':'(',']':'[','}':'{'}
        opens='({['
        close='}])'
        for i in s:
            if i in opens:
                l.append(i)
            if i in close:
                if len(l)==0:
                    return False
                else:
                   # print(l[-1],d[i])
                    if d[i]==l[-1]:
                        l.pop()
                    else:
                        return False
        if len(l)==0:
            return True
        else:
            return False