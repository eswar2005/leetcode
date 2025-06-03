# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head:
            return None
        temp=head
        l=[]
        while temp:
            l.append(temp.val)
            temp=temp.next
        k=sorted(l)
        head=ListNode(k[0])
        curr=head
        for i in k[1:]:
            curr.next=ListNode(i)
            curr=curr.next
        return head