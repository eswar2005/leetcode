class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        s=""
        l=[]
        for i in digits:
            s+=str(i)
            k=int(s) +1;
            m=str(k)
        for j in m:
            l.append(int(j))
        return l

        