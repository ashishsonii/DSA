class Solution {
public:

    long long dp[1000006][2];
    long long helper(vector<int>& nums, int i, bool flag) {
        if (i >= nums.size()) return 0;


        if(dp[i][flag]!=-1) return dp[i][flag];
        long long y = helper(nums, i + 1,flag);

        long long x = 0;

        if (flag) {
           
            x = nums[i] + helper(nums, i + 1, false);

        } else {
           
            x = -(nums[i]) + helper(nums, i + 1, true);
        }

        return dp[i][flag]= max(x, y);
    }

    long long maxAlternatingSum(vector<int>& nums) {
        // return helper(nums, 0 ,true);


        /// bottom up approach;

        int n= nums.size();
        vector<vector<long long>>dp(n+1,vector<long long>(2,0));

        for(int i=1; i<n+1; i++){
            dp[i][0]=max(+dp[i-1][1]-nums[i-1],dp[i-1][0]);
            dp[i][1]=max(nums[i-1]+dp[i-1][0],dp[i-1][1]);

        }
        return max(dp[n][0],dp[n][1]);

       
    }
};