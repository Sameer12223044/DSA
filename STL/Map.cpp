#include <iostream>
#include <map>
using namespace std;


// Map
void explainMap() {
    map<int, int> mp;

    mp[1] = 2;
    mp.emplace(3, 2);
    mp.insert({2, 3});

    map<pair<int, int>, int> pairMap;
    pairMap[{2, 3}] = 10;

    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mp[1] << endl;
    cout << mp[5] << endl;

    auto it = mp.find(3);
    if (it != mp.end()) {
        cout << it->second << endl;
    }

    auto lb = mp.lower_bound(2);
    auto ub = mp.upper_bound(3);

    if (lb != mp.end());
	 cout << lb->first << endl;
    if (ub != mp.end());
	 cout << ub->first << endl;
}

int main() {
    explainMap();
    return 0;
}

