#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int num) {
    int sum = 0, temp = num, digit, digits = 0;

    int n = num;
    while (n) {
        digits++;
        n /= 10;
    } 
    while (temp) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == num;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
    return 0;
}

