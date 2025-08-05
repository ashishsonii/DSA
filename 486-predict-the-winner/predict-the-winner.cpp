class Solution {
public:
    int dp[21][21];

    int play(int i, int j,vector<int>nums){
        if(i==j) return nums[i];
        if(i>j) return 0;
        if (dp[i][j] != -1) return dp[i][j];

        int left=nums[i]+min(play(i+2,j,nums),play(i+1,j-1,nums));
        int right=nums[j]+min(play(i,j-2,nums),play(i+1,j-1,nums));

        return dp[i][j]=max(left,right);
        
        
        

    }

    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int sum=0;
        memset(dp, -1, sizeof(dp));
        while(i!=n){
            sum+=nums[i]; i++;

        }
        int r=play(0,n-1,nums);
        return r>=(sum-r);
        
    }
};