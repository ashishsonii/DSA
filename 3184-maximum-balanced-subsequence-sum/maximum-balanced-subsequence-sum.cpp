class Solution {
public:

    // unordered_map<string,long long>mp;

    // long long helper(vector<int>& nums ,int prev,int i){
    //     if(i>=nums.size()) return 0;
    //      string key=to_string(prev)+" "+ to_string(i);
    //      if(mp.find(key)!=mp.end()) return mp[key];

    //     long long take=INT_MIN;
    //     long long skip=INT_MIN;
       
    //     if(prev==-1 || nums[i]-i>=nums[prev]-prev){
    //         take=nums[i]+helper(nums,i,i+1);
    //     }
    //      skip=helper(nums,prev,i+1);
      
    //     return mp[key]=max(take,skip);
    // }

    long long maxBalancedSubsequenceSum(vector<int>& nums) {
       

        
    //     int mx= *max_element(nums.begin(), nums.end());
    //     if(mx<=0) return mx;
    //     // return helper(nums,-1,0); as this will give tle

    //     vector<long long>v(nums.size());
    //    for(int i=0; i<nums.size(); i++) v[i]=nums[i];
       


    //     for(int i=0; i<nums.size(); i++){
    //         int j=0;
    //         while(j<i){
    //             if(nums[i]-i>=nums[j]-j){
    //                 v[i]=max(v[j]+nums[i],v[i]);
    //             }
    //             j++;             
    //         }
    //     }
    //     return *max_element(v.begin(), v.end());


        vector<long long> v(nums.size());
        long long result=LLONG_MIN;
        map<long long,long long>mp;
        for(int i=0; i<nums.size(); i++){
            v[i]=nums[i]-i;
           
        }
       

        for(int i=0; i<nums.size(); i++){
            auto it =mp.upper_bound(v[i]);
            long long sum=nums[i];
            if(it!=mp.begin()) {
                it--;
                sum+=it->second;
                
            }
            mp[v[i]]=max(sum,mp[v[i]]);
            it=mp.upper_bound(v[i]);
            while(it!=mp.end() && it->second<=sum){
                    mp.erase(it++);
                }
            result=max(sum,result);
            
            
        }
        return result;


        
    }
};