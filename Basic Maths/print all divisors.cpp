#include <iostream>
using namespace std;

void printDivisors(int num) {
    for (int i = 1; i <= num; i++) 
        if (num % i == 0){
            cout<< i << " ";
        } 
    cout << endl;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0){
	printDivisors(num);
	}else{
	cout << "Enter a positive number.\n";
	}
    return 0;
}

