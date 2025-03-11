//#include<iostream>
//using namespace std;
//
//// pass by value
//void doSomething(int num){
//	cout<<num<<endl;
//	num+=5; 
//	cout<<num<<endl;
//	num+=5;
//	cout<<num<<endl;
//}
//int main(){
//	int num=10;
//	doSomething(num);
//	cout<<num<<endl;
//	return 0;
//}


#include<iostream>
using namespace std;

// pass by value 
void doSomething(string s){
	s[0]='T';
	cout<<s<<endl;
}

int main(){
	string s="Sam";
	doSomething(s);
	cout<<s<<endl;
	return 0;
}
