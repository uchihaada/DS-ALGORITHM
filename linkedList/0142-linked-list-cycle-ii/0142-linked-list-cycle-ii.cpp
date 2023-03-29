/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *slow=head;
        ListNode* fast=head;
        
        if(head==NULL){
            return NULL;
        }
        
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            
            if(slow==fast){
                fast=head;
                while(slow!=fast){
              
                    slow=slow->next;
                    fast=fast->next;
                }
                cout<<slow->val<<" "<<slow->next->val;
                return slow;
                
            } 
            
        }
        return NULL;
      
    }
};