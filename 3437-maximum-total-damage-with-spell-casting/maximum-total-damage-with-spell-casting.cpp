class Solution {
public:

typedef long long ll;
int n;



////mzzaaa aagya solve krkr boosted my confifinece
    
    unordered_map<long long, long long> mp;
    vector<ll> t;
    



long long helper(long long i,vector<ll>& nums) {
   if (i >= nums.size()) return 0;  
    if (t[i]!=-1) return t[i];
    
  
    long long skip=helper(i+1,nums);

    ll j= lower_bound(begin(nums) + i + 1, end(nums), nums[i] + 3) - begin(nums);

    ll take =mp[nums[i]]*nums[i]+helper(j,nums);
    return t[i]=max(skip,take);
  
}


    long long maximumTotalDamage(vector<int>& power) {
        for (int x : power) 
            mp[x]++;

        vector<ll> nums(mp.size());

        for (auto &p : mp)
            nums.push_back(p.first);

        sort(begin(nums), end(nums));
        n = nums.size();
        t.assign(n, -1);

        return helper(0, nums);
    
      

        
       
        
    }
};