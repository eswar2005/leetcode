/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        if(head->next==nullptr){
            head=nullptr;
        }
        ListNode *temp=head;
        ListNode *temp1=head;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        int del_ele=cnt-n;
        int s=0;
        if(del_ele==0)
            head=head->next;
        while(temp1){
            s++;
            if(s==del_ele){
                temp1->next=temp1->next->next;
            }
            temp1=temp1->next;
        }
        return head;
    }
};