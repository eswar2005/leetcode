# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        temp=head
        l=""
        while temp:
            l+=str(temp.val)
            temp=temp.next
        k=l[::-1]
        if l==k:
            return True
        return False
        