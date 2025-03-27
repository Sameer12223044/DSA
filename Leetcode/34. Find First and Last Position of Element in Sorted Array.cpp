class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result={-1,-1};

        result[0]=findBound(nums,target,true);
        if(result[0]==-1){
            return result; 
        }
        result[1]=findBound(nums,target,false);
        return result;
    }
private:
    int findBound(vector<int>& nums,int target,bool isFirst){
        int low=0;
        int high=nums.size()-1;
        int bound=-1;

        while(low<=high){
            int mid=(low+high)/2;

            if (nums[mid]==target){
                bound=mid;  
                if(isFirst){
                    high=mid-1;  
                }else{
                    low=mid+1;  
                }
            }else if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return bound;
    }
};

