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

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reversed number: " << reverseNumber(num) << endl;
    return 0;
}

