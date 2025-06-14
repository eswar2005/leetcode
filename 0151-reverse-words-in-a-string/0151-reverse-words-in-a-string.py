class Solution:
    def reverseWords(self, s: str) -> str:
        s=s.strip()
        k=[]
        words=s.split(" ")
        words=words[::-1]
        # filtered = [word for word in words if word != '']
        for word in words:
            if word!='':
                k.append(word)
        return " ".join(k)
        
        