class Solution {
public:
    bool check(vector<int>& nums) {
        int breakCount=0;
        for(int i=1; i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                breakCount++;
            }
        }
        if(breakCount>1){
            return false;
        }
        return breakCount==0||nums[nums.size()-1]<=nums[0];
    }
};
