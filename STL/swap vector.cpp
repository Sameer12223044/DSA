#include <bits/stdc++.h>
using namespace std;



// Swap the elemnts in a vector
void swapElements() {
    vector<int> v = {10, 20, 30, 40, 50};

    swap(v[1], v[3]);

    cout << " ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    swapElements();
    return 0;
}

