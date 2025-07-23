class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int n=nums.size();
        vector<int> pre(n);
        pre[0]=nums[0];
        int sum=nums[0];

        unordered_map<int,int> mp;
        mp[0]++;
        mp[sum]++;
        if(n==1 ) return nums[0]==k;
        if(nums[0]==k) count++;
        for (int i = 1; i < n; i++) {
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end()){
                int j=mp[sum-k];
                while(j!=0){
                    count++;
                    j--;
                }
            
            }
            mp[sum]++;



        }
          return count;
    }
  
};
