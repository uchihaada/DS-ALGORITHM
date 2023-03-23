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
    ListNode* swapPairs(ListNode* head) {
        //base case
        if(head==NULL || head->next==NULL){
            return head;
        }

        //first step- swap the first two nodes.
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        
        //swap till index 1
        int c=0;
        while(c<2){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            c++;
        }

        //After swapping the first two nodes call recurssion to swap the rest of the nodes 
        //in the list. And this head of the swapped list, head->next will be pointing towards 
        //it.

        head->next=swapPairs(next);

        return prev;



    }
};