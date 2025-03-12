#include <bits/stdc++.h>
using namespace std;

void explainVector() {
    vector<int> v;
    
    v.push_back(1);
    v.emplace_back(2);
    
    vector<pair<int, int>> vec;
    
    vec.push_back({1, 2});  
    vec.emplace_back(1, 2); 
    
    vector<int> v1(5, 100); 
    
    vector<int> v2(5); 
    
    vector<int> v3(5, 20); 
    vector<int> v4(v3);    
}

int main() {
    explainVector();
    return 0;
}

