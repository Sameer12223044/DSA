#include <bits/stdc++.h>
using namespace std;



// Stack Operations
// LIFO(last in first out)
void stackOperations() {
    stack<int> st; 

    st.push(10);
    st.push(20);
    st.push(30);

    cout << " " << st.top() << endl; 
    cout << " " << st.size() << endl; 

    st.pop(); 
    cout << " " << st.top() << endl; 

    cout << " " << (st.empty() ? "Empty" : "Not Empty") << endl;
}

int main() {
    stackOperations();
    return 0;
}

