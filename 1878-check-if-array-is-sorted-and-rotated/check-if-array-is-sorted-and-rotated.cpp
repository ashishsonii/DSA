class Solution {
public:
    bool check(vector<int>& nums) {
    int i=1;
    int c=0;
    while(i<nums.size()  ){
        if(nums[i-1]>nums[i]) c++;
        i++;

    }
    if(nums[0]<nums[nums.size()-1])c++;
    return(c<=1);     
    }
};