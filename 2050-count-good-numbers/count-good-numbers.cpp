class Solution {
public:
    const long long MOD = 1000000007;


    long long pow(long long x, long long n){
        if(n==0) return 1;
        long long half=pow(x,n/2);
        
        long long result=(1LL*half*half)%(MOD);
        if(n%2==0) return result%(MOD);
        else return (1LL*result*x)%(MOD);
    }


    int countGoodNumbers(long long n) {
        long long a=pow(5,(n+1)/2);
        long long b=pow(4,n/2);
       
        return (a*b)%(MOD);

        
    }
};