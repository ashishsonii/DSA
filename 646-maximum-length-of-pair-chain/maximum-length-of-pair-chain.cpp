class Solution {
public:

    int dp[1001][1001];

    int helper(vector<vector<int>>& v,int i,int prev){
        if(i>=v.size()) return 0;
        if(prev!=-1 && dp[i][prev]!=-1) return dp[i][prev];
        int take=0;
        if(prev==-1 || v[prev][1]<v[i][0]){
            take=1+helper(v,i+1,i);
            
        }
        int l=helper(v,i+1,prev);
       if(prev!=-1) return dp[i][prev]= max(l,take);
       return max(l,take);
       



    }
    int findLongestChain(vector<vector<int>>& v) {
        memset(dp,-1,sizeof(dp));

        sort(v.begin(),v.end());
        return helper(v,0,-1);
        
    }
};