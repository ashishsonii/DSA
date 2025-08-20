class Solution {
public:

    int n;
    int sum=0;
    int t;
    int c=0;

   int  find(vector<int>& nums,int i, int sum){
         if (i == n) {  // base case: all elements considered
        return (sum == t) ? 1 : 0;  // found one way
    }
    int left=find(nums,i+1,sum+nums[i]);
    int r=find(nums,i+1,sum-nums[i]);

       
        
        return r+left;
        

    }

    int findTargetSumWays(vector<int>& nums, int target) {
        n=nums.size();
        t=target;
        

        return find(nums,0,sum);
        
    }
};