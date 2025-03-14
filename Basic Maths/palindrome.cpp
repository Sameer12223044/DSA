#include <iostream>
using namespace std;


int reverseNumber(int num) {
    int rev = 0;
    while (num) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

bool isPalindrome(int num) {
    return num == reverseNumber(num);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num)){
	
        cout << num << " is a palindrome." << endl;
    }else{
	
        cout << num << " is not a palindrome." << endl;
}
    return 0;
}

