#include <bits/stdc++.h>
using namespace std;


// Insert vector
#include <bits/stdc++.h>
using namespace std;

void insertList() {
    vector<int> v = {10, 20, 30, 40, 50};

    v.insert(v.begin() + 2, 25);

    cout << " ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    v.insert(v.begin() + 4, {35, 37});

    cout << " ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}
int main() {
    insertList();
    return 0;
}

