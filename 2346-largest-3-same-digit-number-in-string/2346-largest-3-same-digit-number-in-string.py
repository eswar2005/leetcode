class Solution:
    def largestGoodInteger(self, num: str) -> str:
        a=""
        ans=[]
        for i in range(len(num)-2):
            if num[i]==num[i+1] and num[i+1]==num[i+2] and num[i+1]==num[i]:
                a+=num[i]
                a+=num[i]
                a+=num[i]
                ans.append(a)
                a=""
        minss=-1
        st=""
        for i in ans:
            if(int(i)>minss):
                minss=int(i)
                st=i
        return st
                
        
        