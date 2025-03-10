#include<iostream>
using namespace std;

int main(){
    int amount;
    cout << "Enter the amount: " << endl;
    cin >> amount;

    int Rs100, Rs50, Rs20, Rs1;

    
    int counter = 0; 

    switch (counter) {
        case 0: 
            Rs100 = amount / 100;
            amount = amount % 100;
            cout << "No of 100 rupee notes are " << Rs100 << endl;
            counter++; 
            

        case 1: 
            Rs50 = amount / 50;
            amount = amount % 50;
            cout << "No of 50 rupee notes are " << Rs50 << endl;
            counter++;
        
        case 2: 
            Rs20 = amount / 20;
            amount = amount % 20;
            cout << "No of 20 rupee notes are " << Rs20 << endl;
            counter++;
        
        case 3: 
            Rs1 = amount / 1;
            amount = amount % 1;
            cout << "No of 1 rupee notes are " << Rs1 << endl;
            break; 
    }

    return 0;
}

