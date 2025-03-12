#include <bits/stdc++.h>
using namespace std;



// Erase from strting
void eraseVector() {
    vector<int> v = {10, 20, 30, 40, 50};

    v.erase(v.begin() + 2);

    cout << " ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    v.erase(v.begin(), v.begin() + 2);

    cout << " ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    v.clear();

    cout << " " << v.size() << endl;
}

int main() {
    eraseVector();
    return 0;
}





#include <bits/stdc++.h>
using namespace std;



// Erase from the end
void eraseFromEnd() {
    vector<int> v = {10, 20, 30, 40, 50};

    
    v.pop_back();

    cout << " ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    
    v.erase(v.end() - 2);

    cout << " ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

   
    v.clear();

    cout << " " << v.size() << endl;
}

int main() {
    eraseFromEnd();
    return 0;
}


