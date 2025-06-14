class Solution:
    def minMaxDifference(self, num: int) -> int:
        k=0
        li=[]
        li2=[]
        
        for i in str(num):
            if int(i)<9:
                k=int(i)
                break
        for i in str(num):
            li.append(int(i))
            li2.append(int(i))
        firstno=li[0]
        for i in range(len(li)):
            if li[i]==k:
                li[i]=9
        for i in range(len(li2)):
            if li2[i]==firstno:
                li2[i]=0
        res1=int("".join(str(x) for x in li))
        res2=int("".join(str(x) for x in li2))
        return res1-res2

