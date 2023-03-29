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
    ListNode* helper(ListNode* head) {
       
       //base case
       if(head==NULL || head->next==NULL || head->next->next==NULL)return head;

       ListNode* tail=head;
       
       ListNode*prev=NULL;
       while(tail->next!=NULL){
           prev=tail;
           tail=tail->next;
       }

       prev->next=NULL;
       ListNode*temp=head->next;
       head->next=tail;

       tail->next=helper(temp);

       return head;
       
       
    }

    void reorderList(ListNode* head){
        helper(head);
    }
};