class Solution {
public:


    
 
    long long help(int am,vector<int>& coins,int j,vector<vector<int>> &dp){
        if(am==0) return 0;
        if (am < 0 || j >= coins.size()) return INT_MAX;
        if(dp[j][am]!=-1) return dp[j][am];
         
        
       
        
        int result=help(am-coins[j],coins,j,dp);
        if (result != INT_MAX) { 
                result+=1;
            }

        int skip = help(am, coins, j+1,dp);

      
        return dp[j][am]=min(skip,result);
    }

    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size(), vector<int>(amount+1, -1));

       int ans= help(amount,coins,0,dp);
      
        return (ans==INT_MAX?-1:ans);

        
    }
};