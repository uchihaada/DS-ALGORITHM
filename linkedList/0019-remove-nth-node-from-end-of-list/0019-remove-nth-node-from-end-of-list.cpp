/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 **/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL && n==1)return NULL;

        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        // cout<<count;

        ListNode* prev=new ListNode(0);
        ListNode* newhead=prev;
        prev->next=head;
        temp=head;
        n=count-n;
        int index=0;

        while(temp!=NULL){
            if(index==n){
                prev->next=temp->next;
            }
            prev=temp;
            temp=temp->next;
            index++;
        }
        

        
        
        return newhead->next;
    }
};