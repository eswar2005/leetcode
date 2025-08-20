class Solution:
    def reverseVowels(self, s: str) -> str:
        n=len(s)
        low=0
        high=n-1
        s=list(s)
        vo='aeiouAEIOU'
        while(low<high):
            if s[low] in vo and s[high] in vo:
                s[low],s[high]=s[high],s[low]
                low=low+1
                high=high-1
            if s[low] not in vo:
                low=low+1
            if s[high] not in vo:
                high=high-1
        return "".join(s)
        
        