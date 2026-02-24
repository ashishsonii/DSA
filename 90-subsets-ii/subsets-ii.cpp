class Solution {
public:

   vector<vector<int>> ans;

   void helper(vector<int>& nums,int start,vector<int> &temp ){   
    
    ans.push_back(temp);  
    
    for(int i=start; i<nums.size(); i++){
        if(i>start && nums[i-1]==nums[i]) continue;
        temp.push_back(nums[i]);
        helper(nums,i+1,temp);
        temp.pop_back();

    }
    return;
   
    


} 


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<int> temp;
        sort(nums.begin(), nums.end()); 

        helper(nums,0,temp);
        return ans;



        
    }
};