int kthElement(int *a, int n, int *b, int m, int k) {
    int i=0,j=0,count=0,result=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            result=a[i++];
        }else{
            result=b[j++];
        }
        count++;
        if(count==k){
            return result;
        }
    }
    while(i<n){
        result=a[i++];
        count++;
        if(count==k){
            return result;
        }
    }
    while(j<m){
        result=b[j++];
        count++;
        if(count==k){
            return result;
        }
    }
    return -1;
    }
