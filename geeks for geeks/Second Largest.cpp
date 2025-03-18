class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        sort(arr.begin(),arr.end(),greater<int>());
        for(int i=1;i<arr.size();i++){
            if(arr[i]<arr[0]){
                return arr[i];
            }
        }
        return -1;
    }
};

