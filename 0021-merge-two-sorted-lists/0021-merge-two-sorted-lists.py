# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if not list1 and not list2:
            return None
        l=[]
        while list1:
            l.append(list1.val)
            list1=list1.next
        while list2:
            l.append(list2.val)
            list2=list2.next
        l.sort()
        head=ListNode(l[0])
        curr=head
        for i in l[1:]:
            curr.next=ListNode(i)
            curr=curr.next
        return head
        