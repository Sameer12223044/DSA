class Solution {
public:
    ListNode* reverseKGroup(ListNode* head,int k){
        if(!head||k==1){
            return head;
        }
        ListNode* ptr=head;
        for(int i=0;i<k;++i){
            if(!ptr){
                return head;
            }
            ptr=ptr->next;
        }
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* next=nullptr;
        for(int i=0;i<k;++i) {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head->next=reverseKGroup(curr,k);
        return prev;
    }
};
