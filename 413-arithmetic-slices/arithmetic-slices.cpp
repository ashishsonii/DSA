class Solution {
public:
vector<vector<int>> res;
 bool check(vector<int>& nums){
    int diff=nums[1]-nums[0];
    for(int i=2; i<nums.size(); i++){
        if(diff!=nums[i]-nums[i-1]) return false;
    }
    return true;

 }
 




    void helper(vector<int>& nums,int start,vector<int> &v){
        if(start>=nums.size()) return;
        

       
           
            v.push_back(nums[start]);

           
            if(v.size()>=3&& check(v)){
                res.push_back(v);
            }

        
            helper(nums,start+1,v);
            v.pop_back();

            
            
        
    }
        

    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();

       
        
    for(int i = 0; i < n; i++) {
            vector<int> v;
            helper(nums, i, v);
        }
        return res.size();
        
    }
};