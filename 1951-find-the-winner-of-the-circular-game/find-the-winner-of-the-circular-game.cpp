class Solution {
public:
    
    int solve(int n,int k){
        if(n==1) return 0;
         return (solve(n-1,k)+k) %n;
    }

    int findTheWinner(int n, int k) {
        
    int r=solve(n,k);
    return r+1;
        

    }
};