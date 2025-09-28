class Solution {
public:
     
     int dp2[2505][2505];

    int helper(vector<int>& nums,int prev,int i){


        if(i>=nums.size()) return 0;
         if(prev>=0 &&dp2[i][prev]!=-1) return dp2[i][prev];
        
        int take=0;

        if(prev==-1||nums[prev]<nums[i]) {
        take= 1+(helper(nums,i,i+1));
        }

        int skip=helper(nums,prev,i+1);
        if(prev!=-1) return dp2[i][prev]= max(take,skip);

        return max(take,skip);



    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp2,-1,sizeof(dp2));
        int n=nums.size();
        vector<int> dp(n,1);
      
       
        
    int mx=1;
        for(int i=0; i<nums.size(); i++){
            int j=0;

            while(j<i){
                if(nums[j]<nums[i]){
                    dp[i]=max(dp[i],dp[j]+1);
                    mx=max(dp[i],mx);
                }
                j++;
            }
            

        }
        return mx;
        
    }
};