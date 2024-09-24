class Solution:
    def isPalindrome(self, s: str) -> bool:
        a="QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm2345678901"
        s=s.lower()
        k=""
        for i in s:
            if i in a:
                k+=i.lower()
        if(k==k[::-1]):
               return True
        return False