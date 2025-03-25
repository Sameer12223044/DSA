#include<bits/stdc++.h>
using namespace std;

void rearrangeAlternating(vector<int>& arr){
    int n=arr.size();
    int i=0, j=0;
    
    while(j<n){
        if(arr[j]>=0) swap(arr[i],arr[j]),i++;
        j++;
    }
    
    int pos=0,neg=i;
    while(pos<neg && neg<n){
        swap(arr[pos],arr[neg]);
        pos += 2;neg += 2;
    }
}

void printArray(const vector<int>& arr){
    for (int num:arr){
	cout<<num<<" ";
}
    cout << endl;
}

int main(){
    vector<int>arr={1,-2,3,-4,5,-6,7,-8};

    rearrangeAlternating(arr); 
    printArray(arr); 
    return 0;
}

