class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int left=*max_element(nums.begin(),nums.end());
        int right=accumulate(nums.begin(),nums.end(),0); 
        while(left<right){
            int mid=(left+right)/2;
            int sum=0;
            int parts=1; 
            for(int num:nums){
                if(sum+num>mid){  
                    parts++; 
                    sum=num;  
                }else{
                    sum+=num;  
                }
            }
            if(parts>k){
                left=mid+1;  
            }else{
                right=mid;  
            }
        }
        return left;
    }
};

