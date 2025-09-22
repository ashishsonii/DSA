class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        unordered_map<int,int> mp;
        for(auto x: nums){
            mp[x]++;
        }
        int mx=-1;
        int f=0;
        for(auto y: mp){
           if( y.second>mx){
            mx=y.second;
            f=1;
            
           }
           else if( y.second==mx){
            mx=y.second;
            f++;
            
           }
        }
        return mx*f;
        

        
    }
};