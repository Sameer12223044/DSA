class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int left=0;
        int right=m*n-1;
        while(left<=right){
            int mid=(left+right)/2;
            int midElem=matrix[mid/n][mid%n]; 
            if(midElem==target){
                return true;
            }else if(midElem<target){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return false;
    }
};

