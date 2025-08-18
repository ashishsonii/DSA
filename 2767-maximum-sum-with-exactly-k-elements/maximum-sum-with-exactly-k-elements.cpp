class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int mx=-1;
        
        for(auto x:nums){
            mx=max(x,mx);
        }
      
        int sum =(mx*k) +  (k*(k-1))/2;
        
        return sum;
        
    }
};