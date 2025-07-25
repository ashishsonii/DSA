class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       
       
      
        int i=0;
       while(nums[i]>=0){
        int temp=abs(nums[i]);
        nums[i]=-nums[i];
        i=temp;
       }
       return i;
        
    }
};