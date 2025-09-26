class Solution {
public:

long long dp[301][5001];

    long long helper(int amount, vector<int>& coins,int start){
        if(amount==0) return 1;
        if(amount<0) return 0;
        if(start>=coins.size()) return 0;
        
        if(dp[start][amount]!=-1) return dp[start][amount];
        
        


        
            long long x=helper(amount,coins,start+1);
            long long y=helper(amount-coins[start],coins,start);
            
            return dp[start][amount]=x+y;
           
        

    }

    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
           
        return helper(amount,coins,0);

      
        
    }
};