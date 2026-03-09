class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {

        int m=nums.size();
        int n=nums[0].size();
        for(int i=0; i<m; i++){
            int f=nums[i][0];
            int l=nums[i][n-1];
            for(int j=0; j<n; j++){
                
                if(target<f || target>l) break;
                if(nums[i][j]==target) return true;
            }
            
        }
        return false;
        
    }
};