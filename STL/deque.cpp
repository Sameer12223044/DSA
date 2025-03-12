#include <bits/stdc++.h>
using namespace std;



// Deque operations
void dequeOperations() {
    deque<int> dq = {10, 20, 30}; 

    dq.push_back(40);
    dq.push_front(5);

    cout << " ";
    for (int num : dq) {
        cout << num << " ";
    }
    cout << endl;

    dq.pop_front();
    dq.pop_back();

    cout << " ";
    for (int num : dq) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    dequeOperations();
    return 0;
}

