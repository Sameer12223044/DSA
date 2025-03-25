#include<bits/stdc++.h>
using namespace std;

vector<int>leaders(vector<int>& arr){
    vector<int>result;
    int max_from_right=arr.back();
    result.push_back(max_from_right);

    for(int i=arr.size()-2;i>=0;i--){
        if(arr[i]>=max_from_right){
            result.push_back(arr[i]);
            max_from_right=arr[i];
        }
    }
    reverse(result.begin(),result.end());
    return result;
}

int main(){
    vector<int>arr={16,17,4,3,5,2};
    for (int leader:leaders(arr)){
	cout << leader << " ";
	}
    cout << endl;
    return 0;
}

