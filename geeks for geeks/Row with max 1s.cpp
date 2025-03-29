class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int n=arr.size();
        if(n==0){
            return -1;
        }
        int m=arr[0].size();
        int max_ones=0;
        int result=-1;
        for(int i=0;i<n;i++){
            int j=m-1;
            while(j>=0 && arr[i][j]==1){
                j--;
            }
            int current_ones=m-j-1;
            if(current_ones>max_ones){
                max_ones=current_ones;
                result=i;
            }
        }
        return result;
    }
};
