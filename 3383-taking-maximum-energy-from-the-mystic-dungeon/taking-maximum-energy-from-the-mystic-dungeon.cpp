class Solution {
public:

    long long dp[100005];

    long long mx=INT_MIN;
    int helper(vector<int>& nums, int k, int i){
        if(i>=nums.size()) return 0;
        if(dp[i]!=INT_MIN) return dp[i];
        long long take=nums[i]+helper(nums,k,i+k);
        
       return dp[i]=take;
 

    }

    int maximumEnergy(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
        while(l<n) {dp[l]=INT_MIN; l++;}

       
       
        for(int i=0; i<n; i++){
            long long t=helper(nums,k,i);
            mx=max(mx,t);
        }

        
        return mx;
        
    }
};