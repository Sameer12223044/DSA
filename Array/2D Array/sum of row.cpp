#include<iostream>
using namespace std;

void printSum(int arr[3][3], int i, int j){
	cout<<" Printing the sum ->"<<endl;
	int sum=0;
		for(int i=0;i<3;i++){
			for(int j=0; j<3; j++){
			sum+=arr[i][j];
		}
		cout<<sum<<" ";
	}
}

int main(){
	int arr[3][3];
	
	cout<<"Enter the elements "<<endl;
	
	// Taking input
	for(int i=0;i<3;i++){
		for(int j=0; j<3; j++){
			cin>>arr[i][j];
		}
	}
	
	cout<<"Printing the array "<<endl;
	
	// print
	for(int i=0; i<3; i++){
		for(int j=0; j<3;j++){
			cout<<arr[i][j]<<" "<<endl;
		}
		cout<<endl;
	}
	printSum(arr,3,3);
}
