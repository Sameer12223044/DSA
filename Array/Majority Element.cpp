#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums){
    sort(nums.begin(),nums.end());
    return nums[nums.size()/2];
}
int main(){
    vector<int>nums={2,2,1,1,3,2};
    int result=majorityElement(nums);
    cout<<"Majority Element: " <<result<<endl;
    return 0;
}
