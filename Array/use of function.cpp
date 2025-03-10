#include<iostream>
using namespace std;

void printArray(int arr[], int size){
	cout<<"Printing the Array "<<endl;
	
	//print the array
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" "<<endl;
	}
	cout<<"Printing done"<<endl;
}
int main(){
	 int third[15]={2,7};
	 int n=15;
	 printArray(third, 15);
	 
	 int fourth[10]={0};
	  n=10;
	 printArray(fourth, 10);
	 
	 int fourthSize=sizeof(fourth)/sizeof(int);
	 cout<<"Size of fifth is "<<fourthSize<<endl;
}
