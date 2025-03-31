class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int low=0;
        int high=n-1;
        
        while(low<=high){
            int mid=(low+high)/2;
            int max_row=0;
            for(int i=0;i<m;++i){
                if(mat[i][mid]>mat[max_row][mid]){
                    max_row=i;
                }
            }
            bool leftIsBig=mid>0 && mat[max_row][mid-1]>mat[max_row][mid];
            bool rightIsBig=mid<n-1 && mat[max_row][mid+1]>mat[max_row][mid];
            if(!leftIsBig && !rightIsBig){
                return{max_row, mid};
            }else if(leftIsBig){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return{-1,-1};
    }
};
