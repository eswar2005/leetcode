class Solution:
    def maxFreqSum(self, s: str) -> int:
        x=collections.Counter(s)
        max_v,max_c=0,0
        for char,freq in x.items():
            if char in 'aeiou':
                max_v=max(max_v,freq)
            else:
                max_c=max(max_c,freq)
        return max_v+max_c
        