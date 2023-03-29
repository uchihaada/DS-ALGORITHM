

class Solution {
public:
    // unordered_map<Node*,Node*>mp;

    Node* copyRandomList(Node* head) {

    //     if(head==NULL)return NULL;
    //     if(mp[head]!=NULL) return mp[head];
    //     mp[head]=new Node(head->val);
    //     mp[head]->next=copyRandomList(head->next);
    //     mp[head]->random=copyRandomList(head->random);
    //     return mp[head];
    if(head==NULL)return NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* temp=curr->next;
        curr->next =new Node(curr->val);
        curr->next->next=temp;
        curr=temp;
    }

    curr=head;

    while(curr!=NULL){
        if(curr->next!=NULL){
            curr->next->random=(curr->random!=NULL)?curr->random->next:NULL;
        }
        curr=curr->next->next;
    }
    Node* orig=head;
    Node*copy=head->next;
    Node* gg=copy;
    while(orig!=NULL){
        orig->next=orig->next->next;
        copy->next = (copy->next != NULL) ? copy->next->next  : copy->next;
        orig=orig->next;
        copy=copy->next;
    }
    return gg;


    
    }
};