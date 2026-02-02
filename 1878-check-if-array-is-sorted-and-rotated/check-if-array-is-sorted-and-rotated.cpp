class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int f=nums[0];
        int i=1;
        while(i<n && nums[i]>=nums[i-1]){
            i++;

        }
        if(i==n ) return true;
       
        if(nums[i]>f) return false;

        i++;
        while(i<n && nums[i]<=f && nums[i-1]<=nums[i]){
            i++;
            

        }
        if(i==n ) return true;
        return false;


        
    }
};