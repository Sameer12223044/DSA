class Solution {
  public:
    int pairWithMaxSum(vector<int> &arr) {
        if(arr.size()<2){
            return 0;
        }
        int maxSum=0;
        for(int i=0;i<arr.size()-1;++i){
            int currentSum=arr[i]+arr[i+1];
            if(currentSum>maxSum){
                maxSum=currentSum;
            }
        }
        return maxSum;
    }
};

