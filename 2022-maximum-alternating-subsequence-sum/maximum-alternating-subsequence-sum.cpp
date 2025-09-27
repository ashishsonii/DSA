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
        memset(dp,-1,sizeof(dp));
        return helper(nums, 0 ,true);
    }
};