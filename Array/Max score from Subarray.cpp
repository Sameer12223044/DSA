#include<bits/stdc++.h>
using namespace std;

int maxScoreFromSubarrays(vector<int>& arr){
    if(arr.size()<2){
        return 0;
    }
    int maxSum=0;
    for(int i=0;i<arr.size()-1;++i){
        int currentSum=arr[i]+arr[i+1];
        if(currentSum>maxSum){
            maxSum=currentSum;
        }
    }
    return maxSum;
}

int main(){
    vector<int>arr={4,3,1,5,6};
    cout<<" " <<maxScoreFromSubarrays(arr)<< endl;
    return 0;
}
