class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size()-1;
        int i =0;
        int temp;

        while(nums[i]>=0){
            temp=nums[i];
            nums[i]=-temp;
            i=abs(temp);
        }
        
       
        return abs(temp);
        
        
  }
};