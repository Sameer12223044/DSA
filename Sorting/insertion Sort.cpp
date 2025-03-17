#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
	for(int i=0; i<n-1;i++){
		bool swapped=false;
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped=true;
			}
		}
		if(!swapped)
		break;
	}
}
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[]={35,15,80,56,10,12,99,77};
	int n=sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr,n);
	printArray(arr,n);
	return 0;
	
}
