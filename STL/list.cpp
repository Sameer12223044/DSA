#include <bits/stdc++.h>
using namespace std;


// list operations
void listOperations() {
    list<int> lst = {10, 20, 30}; 

    lst.push_back(40);
    lst.emplace_back(50);

    lst.push_front(5);
    lst.emplace_front(1);

    cout << " ";
    for (int num : lst) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    listOperations();
    return 0;
}

