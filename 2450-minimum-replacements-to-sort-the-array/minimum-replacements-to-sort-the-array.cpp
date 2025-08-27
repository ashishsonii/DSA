class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {

        int n=nums.size();
        long long tt=0;
        for(int i=n-2; i>=0; i--){
            if(nums[i]<=nums[i+1]) continue;
            long long parts=nums[i]/nums[i+1];
            if(nums[i]%nums[i+1]!=0) parts++;
            nums[i]=nums[i]/parts;
            tt+=(parts-1);
            


        }
        return tt;
        
    }
};