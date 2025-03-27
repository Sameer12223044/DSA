#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums){
    unordered_set<int>s(nums.begin(),nums.end());
    int res=0;
    for (int x:s){

        if(!s.count(x-1)) {
            int y=x+1;
            while(s.count(y)){
                y++;
            }
            res=max(res,y-x);
        }
    }
    return res;
}
int main(){
    vector<int>nums={100,4,200,1,3,2};
    cout<<longestConsecutive(nums)<< endl;
    return 0;
}

