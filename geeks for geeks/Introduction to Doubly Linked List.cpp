class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        if(arr.empty()){
            return nullptr;
        }
        Node* head=new Node(arr[0]);
        Node* current=head;
        for(int i=1;i<arr.size();++i){
            Node* newNode=new Node(arr[i]);
            current->next=newNode;
            newNode->prev=current;
            current=newNode;
        }
        return head;
    }
};

