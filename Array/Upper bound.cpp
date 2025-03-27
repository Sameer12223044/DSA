#include<bits/stdc++.h>
using namespace std;

int upperBound(const vector<int>& arr,int target){
    int left=0;
    int right=arr.size();
    
    while(left<right){
        int mid=(left+right)/2;
        
        if(arr[mid]<=target){
            left=mid+1;
        }else{
            right=mid;
        }
    }
    return left; 
}

int main(){
    vector<int>sortedArray={2,4,6,8,10,12,14};
    int target;
    
    cout<<"Sorted array: ";
    for(int num:sortedArray){
        cout<<num<<" ";
    }
    cout<<endl;
    
    cout<<"Enter a target value: ";
    cin>>target;
    
    int result=upperBound(sortedArray,target);
    
    if(result<sortedArray.size()){
        cout<<"Upper bound of "<<target<<" is at index "<<result<<" with value "<<sortedArray[result]<<endl;
    }else{
        cout<<"All elements are smaller than "<<target<<endl;
    }
    return 0;
}
