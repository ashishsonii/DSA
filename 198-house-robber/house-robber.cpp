class Solution {
public:
      

        //if(i>=nums.size()) return 0;
        //if(dp[i]!=-1) return dp[i];
       // int f=nums[i]+helper(nums,i+2,dp);
       // int s=helper(nums,i+1,dp);
       // return dp[i]=max(s,f);
    //}

    int bottomup(vector<int>& nums,vector<int>&dp,int n){
        if(n==1) return nums[0];
        if(n==0) return 0;
        
        
        dp[n-1]=nums[n-1];
        dp[n-2]=max(nums[n-1],nums[n-2]);
        for(int i=n-3; i>=0; i--){
            dp[i]=max(dp[i+1],dp[i+2]+nums[i]);

        }
        return dp[0];
    }



    int rob(vector<int>& nums) {
        int n=nums.size();
          vector<int>dp(nums.size());
      
        return bottomup(nums,dp,n);
        
    }
};