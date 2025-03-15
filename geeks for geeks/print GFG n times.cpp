class Solution {
  public:
    void printGfg(int N) {
        if(N==0){
            return;
        }
        cout<<"GFG";
        if(N>1){
            cout<<" ";
        }
        printGfg(N-1);
       
    }
};
