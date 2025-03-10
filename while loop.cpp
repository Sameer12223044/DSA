#include<iostream>
using namespace std;

int main(){
	
	/*int n;
	cin>>n;
	
	int i=1;
	while(i<=n){
		cout<<i<<" ";
		i=i+1;
	}*/
	
	
	// Sum of given numbers
	/*int n,sum;
	cin>>n;
	
	int i=1;
	sum=0;
	
	while(i<=n){
		sum = sum+i;
		i=i+1;
	}
	cout<<"Value of sum is: " << sum << endl;*/
	
	
	
	// Sum of all even numbers
	int n,sum;
	
	
	int i=1;
	sum = 0;
	cin>>n;
	
	while(i<=n){
		sum=sum+i;
		i=i+2;
	}
	cout<<"The sum of even number is : " << sum<< endl;
}
