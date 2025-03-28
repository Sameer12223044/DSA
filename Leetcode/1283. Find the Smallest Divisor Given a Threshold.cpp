class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1; 
        int high=*max_element(nums.begin(),nums.end());
        auto calculateSum=[&](int divisor){
            int sum=0;
            for(int num:nums){
                sum+=(num+divisor-1)/divisor;  
            }
            return sum;
        };
        while(low<high){
            int mid=(low+high)/2;
            if(calculateSum(mid)<=threshold){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};

