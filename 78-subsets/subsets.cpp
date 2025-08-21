class Solution {
public:

    vector<vector<int>> ans;
    vector<int> v;
    unordered_set<int> st;
    void sub(vector<int>& nums, int start){
        for(int i=start; i<nums.size(); i++){
            
                 v.push_back(nums[i]);
                 
                 ans.push_back(v);
                 
            
           
           
            
            sub(nums,i+1);
            v.pop_back();
            st.erase(nums[i]);
            
            
            


        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        ans.push_back(v);
        sub(nums,0);
        
        return ans;


        
    }
};