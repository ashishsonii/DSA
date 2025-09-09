class Solution {
public:
    int help(vector<int>& cost,int idx,vector<int>&dp){
        if(idx>=cost.size()) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int one= cost[idx]+help(cost,idx+2,dp);
        int two=  cost[idx]+help(cost,idx+1,dp);
        
        return dp[idx] =min(one,two);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n,-1);
       return min(help(cost,0,dp),help(cost,1,dp));
        
    }
};