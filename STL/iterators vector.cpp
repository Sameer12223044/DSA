#include <bits/stdc++.h>
using namespace std;

void explainIterators() {
    vector<int> v = {10, 20, 30, 40, 50};

    
    cout << " ";
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    
    cout << " ";
    for (auto it = v.rbegin(); it != v.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

   
    cout << " ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    
    cout << " ";
    for (auto it = v.rbegin(); it != v.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    explainIterators();
    return 0;
}

