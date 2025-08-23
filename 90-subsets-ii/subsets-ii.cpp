class Solution {
public:
    set<vector<int>> st;
    vector<vector<int>> ans;
    vector<int> v;


    void sub(vector<int>& nums ,vector<int> &v,int start){

       
        for(int i=start; i<nums.size(); i++){
        
        v.push_back(nums[i]);
            
        if(st.find(v)==st.end()){
            ans.push_back(v);
            st.insert(v);
        }
        sub(nums,v,i+1);
        v.pop_back();

        }

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(),nums.end());
        ans.push_back(v);
        sub(nums,v,0);
        return ans;


        
    }
};