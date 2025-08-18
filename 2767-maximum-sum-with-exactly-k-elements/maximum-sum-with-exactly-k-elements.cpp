class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int mx=-1;
        
        for(auto x:nums){
            mx=max(x,mx);
        }
        int sum =0;
        while(k!=0){
            sum+=mx;
            mx++;
            k--;
        }
        return sum;
        
    }
};