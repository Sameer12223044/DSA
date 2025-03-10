#include<iostream>
using namespace std;

int main(){
	int first[10]={2,7};
	
	int n=10;
	cout<<"Printing the Array "<<endl;
	
	// print the array
	for(int i=0; i<n; i++){
		cout<<first[i]<<" "<<endl;
	}
	
	
	// Initialise alll location with zero
	int second[10]={0};
	
	n=10;
	cout<<"Printing the Array "<<endl;
	for(int i=0; i<n; i++){
		cout<<second[i]<<" "<<endl;
	}
	
	
	int third[10]={1};
	
	n=10;
	cout<<"Printing the Array "<<endl;
	for(int i=0;i<n;i++){
		cout<<third[i]<<" "<<endl;
	}
	
	cout<<endl<<"Everything is fine "<<endl;
	return 0;
	
}
