# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        temp1=l1
        temp2=l2
        a=[]
        b=[]
        while temp1:
            a.append(temp1.val)
            temp1=temp1.next
        while temp2:
            b.append(temp2.val)
            temp2=temp2.next
        r1="".join(map(str,a))
        r2="".join(map(str,b))
        ans=int(r1)+int(r2)
        ss=str(ans)
        k=[]
        for i in ss:
            k.append(int(i))
        head=ListNode(k[0])
        curr=head
        for i in k[1:]:
            curr.next=ListNode(i)
            curr=curr.next
        return head
        

        