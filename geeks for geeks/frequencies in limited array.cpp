class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        int n=arr.size();
        vector<int>freq(n,0);
        
        for(int num:arr){
            if(num>=1 && num<=n){
                freq[num-1]++;
            }
        }
        return freq;
    }
};
