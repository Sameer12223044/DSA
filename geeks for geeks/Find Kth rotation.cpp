class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int left=0;
        int right=arr.size()-1;
        while(left<right){
            int mid=(left+right)/2;
            
            if(arr[mid]>arr[mid+1]){
                return mid+1;
            }else if(arr[mid]<arr[mid-1]){
                return mid;
            }else if(arr[mid]>=arr[left]){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return 0;
    }
};

