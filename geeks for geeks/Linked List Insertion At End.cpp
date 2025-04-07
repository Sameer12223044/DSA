class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* newNode=new Node(x);
        if(head==nullptr){
            return newNode;
        }
        Node* current=head;
        while(current->next!=nullptr){
            current=current->next;
        }
        current->next=newNode;
        return head;
    }
};

