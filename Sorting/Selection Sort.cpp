#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
	for(int i=0;i<n-1;i++){
		int minindex=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[minindex]){
				minindex=j;
			}
		}
		swap(arr[i],arr[minindex]);
	}
}
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[]={10,30,12,88,56,15};
	int n=sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr,n);
	printArray(arr,n);
	return 0;
}
