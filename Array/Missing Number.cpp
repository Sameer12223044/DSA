#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums){
	int n=nums.size();
	int expectedSum=n*(n+1)/2;
	int actualSum=accumulate(nums.begin(),nums.end(),0);
	return expectedSum-actualSum;
}
int main(){
	vector<int> nums={3,0,1,4};
	cout<<"Missing Number: "<<missingNumber(nums)<<endl;
	return 0;
}
