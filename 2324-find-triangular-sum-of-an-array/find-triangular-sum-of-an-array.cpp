class Solution {
public:

  vector<int> helper(vector<int>& nums){
        if(nums.size()==1) return nums;
        vector<int> nv(nums.size()-1);
       

        for(int i=0; i<nums.size()-1; i++){
            nv[i]=(nums[i]+nums[i+1])%10;

        }
        return helper(nv);
    }

    int triangularSum(vector<int>& nums) {
        return helper(nums)[0];

        
        
        
    }
};