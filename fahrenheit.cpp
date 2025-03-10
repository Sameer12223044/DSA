#include <iostream>
using namespace std;

int main() {
    /*double fahrenheit, celsius;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    cout << fahrenheit << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius." << endl;
    return 0;*/
    
    

    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    cout << celsius << "C = " << (celsius * 9.0 / 5.0) + 32 << "F" << endl;
    return 0;


}

