class Solution {
public:

    int summ(vector<vector<int>>& grid,int m,int n,vector<vector<int>> &dp){
        if(m<0 || n<0) return INT_MAX;
        if(dp[m][n]!=-1){
            return dp[m][n];

        }
        
        if(m==0 && n==0) return grid[0][0];;
        
        
       
        return dp[m][n]=grid[m][n]+min(summ(grid,m-1,n,dp),summ(grid,m,n-1,dp));


    }

    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int sm=INT_MAX;
        vector<vector<int>> dp(m, vector<int>(n, -1));

        return summ(grid,m-1,n-1,dp);



        
    }
};