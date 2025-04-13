class Solution {
public:
    int countGoodNumbers(long long n) {
        const int MOD=1e9 + 7;
        long long even_positions=(n+1)/2;
        long long odd_positions=n/2;
        auto power=[&](long long base,long long exp)->long long{
            long long result=1;
            base=base%MOD;
            while(exp>0){
                if(exp%2==1){
                    result=(result*base)%MOD;
                }
                base=(base*base)%MOD;
                exp=exp/2;
            }
            return result;
        };
        long long part1=power(5,even_positions);
        long long part2=power(4,odd_positions);
        return(part1*part2)%MOD;
    }
};
