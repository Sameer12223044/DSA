#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
 
    vector<int> arr = {1, 2, 3, 4, 2, 3, 1, 2, 4, 5};

    
    unordered_map<int, int> frequency_map;


    for (int num : arr) {
        frequency_map[num]++;
    }

   
    cout << "Frequency of elements:" << std::endl;
    for (const auto& entry : frequency_map) {
        cout << "Element: " << entry.first << ", Frequency: " << entry.second << std::endl;
    }

    return 0;
}
