#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[],int n){
	int ind=1;
	for(int i=1;i<n;i++){
		if(arr[i]!=arr[i-1]){
			arr[ind++]=arr[i];
		}
	}
	return ind;
}
int main(){
	int arr[]={1,2,2,3,3,5,4,6,6,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	
	int newLength=removeDuplicates(arr,n);
	for(int i=0;i<newLength;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
