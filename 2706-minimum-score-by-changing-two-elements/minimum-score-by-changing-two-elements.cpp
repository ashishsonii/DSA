class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int minn=INT_MAX;
        if(nums.size()<=3) return 0;
        int n=nums.size();

        sort(nums.begin(), nums.end());
        minn=min(nums[n-1]-nums[2],minn);
        minn=min((nums[n-3]-nums[0]),minn);
        minn=min((nums[n-2]-nums[1]),minn);
        
        
      
        
       
        return minn;
        
    }
};