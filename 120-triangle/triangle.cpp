class Solution {
public:
    long long dp[206][206];
    

    long long helper(vector<vector<int>>& tri,int i, int j){
        if(i<tri.size() && j>=tri[i].size()) return INT_MAX;
        if(i>tri.size() && j>=tri[i].size()) return 0;
        if(i>=tri.size() ) return 0;
        if (dp[i][j] != LLONG_MAX) return dp[i][j];
       
       int below=tri[i][j]+helper(tri,i+1,j);
       int ri=tri[i][j]+helper(tri,i+1,j+1);
       return dp[i][j]=min(below,ri);


       
    }

    int minimumTotal(vector<vector<int>>& tri) {
        for (int i = 0; i < 205; i++)
            for (int j = 0; j < 205; j++)
                dp[i][j] = LLONG_MAX;


        return helper(tri,0,0);
        
    }
};