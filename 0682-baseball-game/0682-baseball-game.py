class Solution:
    def calPoints(self, operations: List[str]) -> int:
        l=[]
        for i in operations:
            if i=="D":
                l.append(l[-1]*2)
            elif i=="C":
                l.pop()
            elif i=='+':
                l.append(l[-1]+l[-2])
            else:
                l.append(int(i))
        return sum(l)

        