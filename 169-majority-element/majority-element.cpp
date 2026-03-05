class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
       
        int cm=1;
        int n=nums.size();
        int t=n/2;
        if(n%2!=0) t+=1;
        int i=1;
        while(i<nums.size()){
            if(nums[i]==nums[i-1]){
                cm++;
                if(cm>=t){
                    return nums[i];
                }
            }
            else{
                cm=1;
            }

            i++;

        }
        return nums[0];
        
    }
};