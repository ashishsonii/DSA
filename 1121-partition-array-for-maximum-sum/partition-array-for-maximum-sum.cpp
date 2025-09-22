class Solution {
public:

    int mxs=-1;
    int dp[1000];
    


    int helper(vector<int>& arr, int k,int i){
        if(i>=arr.size()) return 0;
        if(dp[i]!=-1) return dp[i];
       
        
        
        int cmx=-1;
        int res=0;
        for(int j=i; j<arr.size() && j-i+1<=k; j++ ){
            cmx=max(arr[j],cmx);
            res=max(((cmx*(j-i+1))+helper(arr,k,j+1)),res);
           
           
                
        }


        return dp[i]=res;
       

        
    }

    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        memset(dp,-1,sizeof(dp));
       


        return helper(arr,k,0);
        
    }
};