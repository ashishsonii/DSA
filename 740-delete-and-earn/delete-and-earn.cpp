class Solution {
public:


    int dp[10000+1];

    int helper(vector<int>& v,int i){
        if(i>=v.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int take=v[i]+helper(v,i+2);
        int skip=helper(v,i+1);
        return dp[i] =max(skip,take);
    }

 

    int deleteAndEarn(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
    
        int n=nums.size();
        int maxi = *max_element(nums.begin(), nums.end());

        vector<int> v(maxi+1);
        for(int i=0; i<n; i++){
            v[nums[i]]+=nums[i];
        }
        return helper(v,0);

        
    }
};