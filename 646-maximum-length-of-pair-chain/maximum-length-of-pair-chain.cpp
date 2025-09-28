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
        int n=v.size();
        sort(v.begin(),v.end());
        int mx=1;

        vector<int>dpp(v.size(),1);
        for(int i=0; i<n; i++){
            int j=0;
            while(j<i){
                if(v[i][0]>v[j][1]){
                    dpp[i]=max(dpp[i],1+dpp[j]);
                }
                j++;
                mx=max(dpp[i],mx);
            }
        }
        return mx;
        
    }
};