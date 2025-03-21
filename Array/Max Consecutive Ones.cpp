#include<bits/stdc++.h>
using namespace std;

int maxconsecutiveOnes(int arr[],int size){
	int maxCount=0;
	int currentCount=0;
	
	for(int i=0;i<size;i++){
		if(arr[i]==1){
			currentCount++;
			maxCount=max(maxCount,currentCount);
		}else{
			currentCount=0;
		}
	}
	return maxCount;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<maxconsecutiveOnes(arr,n)<<endl;
	return 0;
	
}
