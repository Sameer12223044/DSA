class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>sumMap;
        int maxLen=0;
        int cumulativeSum=0;
        
        for(int i=0; i<arr.size(); ++i){
            cumulativeSum += arr[i];
            
            if(cumulativeSum==k){
                maxLen=i+1;
            }
            if(sumMap.find(cumulativeSum-k)!=sumMap.end()){
                maxLen=max(maxLen,i-sumMap[cumulativeSum-k]);
            }
            if(sumMap.find(cumulativeSum)==sumMap.end()){
                sumMap[cumulativeSum]=i;
            }
        }
        return maxLen;
        
    }
};

