class Solution {
public:
    
    bool isPowerOfTwo(int n) {
        if(n==1) return 1;
        if(n==0) return 0;
        int m=n;
        while(m!=1){
            if(m%2!=0) return false;
            m/=2;
        }
        return true;
        
    }
};