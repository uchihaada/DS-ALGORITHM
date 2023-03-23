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
 ListNode* reverse(ListNode* head){
     if(head==NULL || head->next==NULL)return head;
    ListNode* prev=NULL;
    ListNode*next=NULL;
    ListNode*curr=head;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;

 }

    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        int idx=1;
        while(idx!=left){
            prev=curr;
            curr=curr->next;
            idx++;
        }

        ListNode* reversehead=curr;
        while(idx!=right){
            curr=curr->next;
            idx++;
        }
        ListNode*tail=curr->next;
        curr->next=NULL;
        ListNode* newhead=reverse(reversehead);
        if(prev!=NULL){
            prev->next=newhead;
        }
        curr=newhead;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=tail;
        
        if(left==1){
            return newhead;
        }
        else{
            
            return head;
        }


    }
};