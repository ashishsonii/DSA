class Solution {
public:
    int n;
    vector<vector<int>> ans;
    unordered_set<int> st;

    void solve(vector<int> &temp,vector<int>nums){
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }
        
        for(int i=0; i<n; i++){
            if(st.find(nums[i])==st.end()){
                st.insert(nums[i]);
                temp.push_back(nums[i]);
                solve(temp,nums);
                st.erase(nums[i]);
                temp.pop_back();
            }
            
        }


    }


    vector<vector<int>> permute(vector<int>& nums) {
       
    n=nums.size();
    vector<int> temp;
    solve(temp,nums);
    return ans;
       

        
    }
};