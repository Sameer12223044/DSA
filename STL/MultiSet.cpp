#include <bits/stdc++.h>
using namespace std;


// MultiSet
void explainMultiSet() {
    multiset<int> ms = {1, 1, 1};

    ms.erase(1); // Erases all occurrences of 1

    ms.insert({1, 1, 1});
    ms.erase(ms.find(1)); // Erases only one occurrence

    auto it = ms.find(1);
    if (it != ms.end()) 
        ms.erase(it, next(it, 2)); // Erases two occurrences if possible
}

int main() {
    explainMultiSet();
    return 0;
}

