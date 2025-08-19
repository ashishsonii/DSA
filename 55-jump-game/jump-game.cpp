class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n= nums.size();
        int i=n-2;
        int j=n-1;
        int gap=1;
        if(n==1) return true;
        while(i>=0){
           
            if(gap<=nums[i]){
                j=i;
                if(i==0 && j==0) return true;
                i--;
                gap=1;
               
            }
            else{
                i--;
                gap++;

            }
        }
        return false;

    }
};