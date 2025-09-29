class Solution {
public:

    long long dp[52][52];

    int helper(vector<int>& value ,int i,int j){
         
        
        if (j-i+1<3) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        long long mini=INT_MAX;
        for(int k=i+1; k<j; k++){   
           long long x=value[i]*value[j]*value[k] +helper(value,i,k)+helper(value,k,j);
           mini=min(x,mini);
        
        }
        return dp[i][j]= mini;
    }
    int minScoreTriangulation(vector<int>& values) {
        memset(dp,-1,sizeof(dp));
        return helper(values,0,values.size()-1);
        
    }
};