#include<bits/stdc++.h>
using namespace std;

void rotatebyOne(vector<int>& nums){
	int n=nums.size();
	if(n>1){
		int last=nums[n-1];
		for(int i=n-2;i>=0;i--){
			nums[i+1]=nums[i];
		}
		nums[0]=last;
	}
}
int main(){
	vector<int>nums={1,2,3,4,5};
	rotatebyOne(nums);
	for(int num:nums){
		cout<<num<<" ";
	}
	cout<<endl;
	return 0;
}
