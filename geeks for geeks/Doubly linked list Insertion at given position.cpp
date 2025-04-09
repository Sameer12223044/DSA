class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        // code here
        Node *newNode=new Node(data);
        if(head==nullptr){
            return newNode;
        }
        Node *current=head;
        int count=0;
        while(count<pos && current->next!=nullptr){
            current=current->next;
            count++;
        }
        newNode->next=current->next;
        newNode->prev=current;
        if(current->next!=nullptr){
            current->next->prev=newNode;
        }
        current->next=newNode;
        return head;
    }
};
