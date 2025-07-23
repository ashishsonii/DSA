class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int c=0;
        int sum=nums[0];
        unordered_map<int,int> mp;

        mp[0]++;
        mp[(sum % k + k) % k]++;
        if(n==1) return nums[0]%k==0;
        if(nums[0]%k==0)c++;
        for(int i=1;i<n; i++){
        sum+=nums[i];
         int mod = (sum % k + k) % k;

          if(mp.find(mod)!=mp.end()){
           c+=mp[mod];
           
          }
          mp[mod]++;
           
        }
        return c;
        
    }
};