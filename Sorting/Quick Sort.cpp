#include <iostream>
using namespace std;
int partition(int arr[],int low,int high) {
    int pivot=arr[low]; 
    int i=low+1;      
    int j=high;         

    while(i<=j){
        while(i<=high && arr[i]<=pivot){
        	i++;
		}  
        while(j>=low && arr[j]>pivot){
        	j--;
		}   
        if(i<j){
            swap(arr[i],arr[j]); 
        }
    }
    swap(arr[low],arr[j]);
    return j; 
}
void quickSort(int arr[],int low,int high){
    if (low<high){
        int pivotIndex=partition(arr,low,high); 
        quickSort(arr,low,pivotIndex-1); 
        quickSort(arr,pivotIndex+1,high); 
    }
}
void printArray(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
}
int main(){
    int arr[]={4,1,3,9,7}; 
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array: ";
    printArray(arr,n);
    quickSort(arr,0,n-1); 
    cout<<"Sorted Array: ";
    printArray(arr,n);
    return 0;
}

