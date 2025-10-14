class Solution {
public:

    bool helper(vector<int>& nums, int i,int n){
        i++;
        while(i<n){
            if(i>=n) return true;
            if(nums[i]<=nums[i-1]) return false;
            i++;

        }
        return true;

    }

    bool hasIncreasingSubarrays(vector<int>& nums, int k) {

       for(int i=0; i<nums.size(); i++){
        bool f=false;
        if(i+k-1<nums.size())f=helper(nums,i,i+k);
        bool s=false;
       if(i+2*k-1<nums.size()) s=helper(nums,i+k,i+2*k);
        if(f&&s) return true;
        
       }
       return false;

        
    }
};