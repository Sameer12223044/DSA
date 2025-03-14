int countDigits(int n) {
    int count=0;
    while(n){
        count++;
        n=n/10;
    }
    return count;
}
