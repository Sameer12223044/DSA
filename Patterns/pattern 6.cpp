#include<iostream>
using namespace std;


// 12345
// 1234
// 123
// 12

void print(int n) {
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <=n-i+1; j++) {  
            cout << j << " ";
        }
        cout << endl; 
    }
}

int main() {
    int t;
    cin >> t;  

    for (int i = 0; i < t; i++) {  
        int n;
        cin >> n;  
        print(n);  
    }

    return 0;
}
