class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
        int left=0;
        int right=arr.size()-1;
        int result=-1;
        
        while(left<=right){
            int mid=(left+right)/2;
            
            if(arr[mid]==x){
                result=mid;
                left=mid+1;
            }else if(arr[mid]<x){
                result=mid;
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return result;
    }
};
