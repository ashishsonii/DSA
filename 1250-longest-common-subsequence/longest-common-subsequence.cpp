class Solution {
public:
     //mzza aagya
     int dp[1001][1001];

    int helper(string &text1, string &text2,int i,int j){
        int t1=text1.size();
        int t2=text2.size();

        if(i>=t1 || j>=t2) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int x=0;
        if(text1[i]==text2[j]) x= 1+helper(text1,text2,i+1,j+1);
        else x=max(helper(text1,text2,i+1,j),helper(text1,text2,i,j+1));
        return dp[i][j]= x;
    }

    int longestCommonSubsequence(string text1, string text2) {
        int t1=text1.size();
        int t2=text2.size();
        memset(dp,-1,sizeof(dp));
        int mx=0;
    
        int cmx = helper(text1, text2, 0, 0);
        mx=max(cmx,mx);    
        return mx;

       

    }
};