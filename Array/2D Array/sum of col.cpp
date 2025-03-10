#include<iostream>
using namespace std;

void printColSum(int arr[3][3]){
    cout << "Printing the column sums ->" << endl;
    for(int j = 0; j < 3; j++) {
        int sum = 0;
        for(int i = 0; i < 3; i++) {
            sum += arr[i][j];  // Sum elements in the same column
        }
    }
}

int main(){
    int arr[3][3];
    
    cout << "Enter the elements " << endl;
    
    // Taking input
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }
    
    cout << "Printing the array " << endl;
    
    // Print the 2D array
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Print column sums
    printColSum(arr);
    
    return 0;
}

