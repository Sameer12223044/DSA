class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        DLLNode* current=head;
        DLLNode* prev=nullptr;
        DLLNode* next=nullptr;
        while(current!=nullptr){
            next=current->next;
            current->next=prev;
            current->prev=next;
            prev=current;
            current=next;
        }
        return prev;
    }
};
