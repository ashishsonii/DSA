class Solution {
public:
    


    int longestSubsequence(vector<int>& arr, int diff) {
        long long mx=0;
       unordered_map<long long,long long>mp;
       for(int i=0; i<arr.size(); i++){
            long long curr=arr[i];
            long long prev=arr[i]-diff;
            
            mp[curr]= mp[prev]+1;
            mx=max(mx,mp[curr]);
       }
        
       
        return mx;
       
        
    }
};