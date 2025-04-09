class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        if(head==nullptr){
            return nullptr;
        }
        Node* current=head;
        if(x==1){
            head=current->next;
            if(head!=nullptr){
                head->prev=nullptr;
            }
            delete current;
            return head;
        }
        int count=1;
        while(current!=nullptr && count<x){
            current=current->next;
            count++;
        }
        if(current==nullptr){
            return head;
        }
        if(current->prev!=nullptr){
            current->prev->next=current->next;
        }
        if(current->next!=nullptr){
            current->next->prev=current->prev;
        }
        delete current;
        return head;
    }
};
