class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        int x=a, y=b;
        while(y!=0){
            int temp=y;
            y=x%y;
            x=temp;
        }
        int gcd=x;
        long long lcm=(1LL*a*b)/gcd;
        return{static_cast<int>(lcm),gcd};
    }
};

