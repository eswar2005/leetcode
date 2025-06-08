class Solution:
    def lexicalOrder(self, n: int) -> List[int]:
        l=[]
        k=[]
        for i in range(1,n+1):
            l.append(str(i))
        l.sort()
        for i in l:
            k.append(int(i))
        return k

        
