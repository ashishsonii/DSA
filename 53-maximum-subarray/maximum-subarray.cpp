class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int csum=0;
        int ms=INT_MIN;
       
        for(int i=0; i<nums.size(); i++){
            csum+=nums[i];
            ms=max(ms,csum);
            if(csum<0) csum=0;
           

        }
        return ms;


        
        
    }
};