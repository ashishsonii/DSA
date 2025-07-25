class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
       
        for(auto ele: mp){
            if(ele.second>1){
                return ele.first;
            }
        }
        return -1;
        
    }
};