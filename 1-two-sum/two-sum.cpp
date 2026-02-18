class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int>mp;
        for(int i=0; i<nums.size(); i++){
            
            int re=target-nums[i];
            if(mp.count(re)){
                return {i,mp[re]};
                
            }
            mp[nums[i]]=i;


        }
        return {};
       

        

        }
       
};