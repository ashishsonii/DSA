class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        set<int> s;
        int n=nums.size();
        for(int i=0; i<n; i++){
            int j=nums[i][0];
            while(j<=nums[i][1]){
                s.insert(j);
                j++;
            }
        }
        
        return s.size();

        
    }
};