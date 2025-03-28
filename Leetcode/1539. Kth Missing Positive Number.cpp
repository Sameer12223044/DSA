class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missingCount=0;
        int currentNum=1;
        int idx=0;
        while(missingCount<k){
            if(idx<arr.size() && arr[idx]==currentNum){
                idx++;
            }else{
                missingCount++;
            }
            currentNum++;
        }
        return currentNum - 1;
    }
};

