#include<iostream>
using namespace std;

void update(int arr[], int n){
	cout<<"Inside the function"<<endl;
	
	// update the array
	arr[0]=120;
	// printing the array
	for(int i=0; i<3; i++){
		cout<<arr[i]<< " ";
	}
	cout<<endl;
	
	cout<<"Going back to main function "<<endl;
}

int main(){
	int arr[3]={2,3,4};
	update(arr, 3);
	
	//printing the arrray
	cout<<endl<<"Printing in main function"<<endl;
	for(int i=0; i<3; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
