#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums,int d){
	int n=nums.size();
	d=d%n;
	if(d==0){
		return;
	}
	reverse(nums.begin(),nums.end());
	reverse(nums.begin(),nums.begin()+d);
	reverse(nums.begin()+d,nums.end());
}
int main(){
	vector<int>& nums={1,2,3,4,5,6,7,8,9};
	int d=5;
	rotate(nums,d);
	for(int num:nums){
		cout<<num<<" ";
	}
	cout<<endl;
	return 0;
}
