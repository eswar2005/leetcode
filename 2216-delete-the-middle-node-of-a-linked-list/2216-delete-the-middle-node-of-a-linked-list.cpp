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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp =head;
        int c=0;
        while(temp){
            c++;
            temp=temp->next;
        }
        int mid=c/2;
        if(mid==0)return nullptr;
        temp=head;
        for(int i=1;i<mid && temp!=NULL ;i++){
            temp=temp->next;
        }
        if(temp !=nullptr){
            temp->next=temp->next->next;
        }
        return head;
    }
};