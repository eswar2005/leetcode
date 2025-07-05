class MinStack:

    def __init__(self):
        self.l=[]
        

    def push(self, val: int) -> None:
        self.l.append(val)

    def pop(self) -> None:
        self.l.pop()
        

    def top(self) -> int:
        return self.l[-1]
        

    def getMin(self) -> int:
        mins=10000000000
        for i in self.l:
            mins=min(mins,i)
        return mins 
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()