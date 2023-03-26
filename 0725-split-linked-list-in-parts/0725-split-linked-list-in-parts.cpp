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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* curr=head;
        int size=0;
        while(curr!=NULL){
            size++;
            curr=curr->next;
        }
        cout<<size;
        vector<ListNode*>ans;
        int eachpartsize=size/k;
        int extraNodes=size%k;
        curr=head;
        ListNode* prev=NULL;
        while(curr){
            int idx=eachpartsize;
            ans.push_back(curr);
            while(idx){
                prev=curr;
                curr=curr->next;
                idx--;
            }
            if(curr!=NULL && extraNodes>0 ){
                prev=curr;
                curr=curr->next;
                extraNodes--;
            }
            prev->next=NULL;

        }
        while(ans.size()!=k){
            ans.push_back(NULL);
        }
        
        return ans;
    }
};