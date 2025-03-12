#include<bits/stdc++.h>
using namespace std;

// Set operations
void explainSet() {
    set<int> s = {1, 2, 3, 4, 5};
    cout << (s.find(3) != s.end() ? "Found" : "Not Found") << endl;
    cout << s.count(2) << endl;
    s.erase(2);
    cout << s.count(2) << endl;
    auto lb = s.lower_bound(3);
	auto ub = s.upper_bound(3);
    cout << (lb != s.end() ? to_string(*lb) : "No LB") << endl;
    cout << (ub != s.end() ? to_string(*ub) : "No UB") << endl;
}

int main() {
    explainSet();
    return 0;
}
