#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums){
	int j=0;
	for(int i=0;i<nums.size();i++){
		if(nums[i]!=0){
			swap(nums[i],nums[j]);
			j++;
		}
	}
}
int main(){
	vector<int> nums={1,0,2,0,3,4,5,0,6,0,7,8,9};
	moveZeroes(nums);
	for(int num:nums){
		cout<<num<<" ";
	}
	cout<<endl;
	return 0;
}
