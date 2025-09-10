class Solution {
public:
    vector<vector<int>> move{{0, 1}, {1, 0}};

   
    int m;
    int n;

   int  path(int i, int j,vector<vector<int>> &dp) {
        if (i >= m || j >= n)
            return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if (i == m - 1 && j == n - 1) {
            return 1;
        }


        int left=path(i + move[0][0], j + move[0][1],dp);
        int right =path(i + move[1][0], j + move[1][1],dp);
        return dp[i][j]=left+right;
    }

    int uniquePaths(int l, int k) {
      
        m = l;
        n = k;
        vector<vector<int>>dp(m,vector<int> (n,-1));
       
        return path(0, 0,dp);
        
    }
};