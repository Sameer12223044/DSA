class Solution {
public:
    int countPrimes(int n) {
        if(n<3)return 0;
        vector<bool>prime(n,true);
        int count=n/2;  
        for(int i=3;i*i<n;i+=2){
            if(!prime[i])continue;
            for(int j=i*i;j<n;j+=2*i){
                if(prime[j]){
                    prime[j]=false;
                    --count;
                }
            }
        }
        return count;
    }
};
