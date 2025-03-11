#include <iostream>
using namespace std;


//1
//12
//123
//1234
// Function to print the pattern
void print(int n) {
    for (int i = 1; i <= n; i++) {  
        for (int j = 1; j <= i; j++) {  
            cout << j << " ";  
        }  
        cout << endl;  
    }
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;  // Input for each test case
        print(n);
    }

    return 0;
}

