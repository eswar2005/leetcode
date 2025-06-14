class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        maxs=0
        for i in sentences:
            maxs=max(maxs,i.count(' '))
        return maxs+1
        