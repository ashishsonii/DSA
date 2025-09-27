class Solution {
public:
     
     int dp[2505][2505];

    int helper(vector<int>& nums,int prev,int i){


        if(i>=nums.size()) return 0;
         if(prev>=0 &&dp[i][prev]!=-1) return dp[i][prev];
        
        int take=0;

        if(prev==-1||nums[prev]<nums[i]) {
        take= 1+(helper(nums,i,i+1));
        }

        int skip=helper(nums,prev,i+1);
        if(prev!=-1) return dp[i][prev]= max(take,skip);

        return max(take,skip);



    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
       
        return helper(nums,-1,0);
        
    }
};