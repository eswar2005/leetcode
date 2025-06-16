class Solution:
    def maxDiff(self, num: int) -> int:
        s=str(num)
        k=list(s)
        b=list(s)
        maxss=int(k[0])
        if s[0]!='9':
            x=s[0]
            k=[ch if ch !=x else '9' for ch in k]
        else:
            for i in range(1,len(s)):
                if s[i]!='9':
                    x=s[i]
                    k=[ch if ch !=x else '9' for ch in k]
                    break
        if s[0] != '1':
            x = s[0]
            b = [ch if ch != x else '1' for ch in b]
        else:
            for i in range(1, len(s)):
                if s[i] != '0' and s[i] != '1':
                    x = s[i]
                    b = [ch if ch != x else '0' for ch in b]
                    break
        maxe=int("".join(k))
        mine=int("".join(b))
        print(maxe,mine)
        return maxe-mine
        