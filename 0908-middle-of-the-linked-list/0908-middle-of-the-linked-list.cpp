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
    ListNode* middleNode(ListNode* head) {
        int cnt=1;
        ListNode *temp=head;
         ListNode *temp1=head;
        while(temp->next!=nullptr){
            cnt++;
            temp=temp->next;
        }
      
        cnt=cnt/2;
          cout<<cnt;
        int s=0;
        while(cnt!=s){
            s++;
            temp1=temp1->next;
            
        }
        return temp1;
    }
};