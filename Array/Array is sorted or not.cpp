#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
	for(int i=1;i<n;i++){
		if(arr[i-1]>arr[i]){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	cout<<"Enter the number of elements: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the elemnets of Array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(isSorted(arr,n)){
		cout<<"The Array is sorted."<<endl;
	}else{
		cout<<"The Array is not sorted."<<endl;
	}
}
