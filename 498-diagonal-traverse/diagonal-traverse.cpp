class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        
       map< int ,vector<int>> mp;
        vector<int>ans;


        int m=nums.size();
        int n=nums[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<nums[0].size(); j++){
                mp[i+j].push_back(nums[i][j]);


            }
        }
        bool flip=true;
       
        for(auto x: mp){
            if(flip){
                reverse(x.second.begin(),x.second.end()); 

            }
            for(auto m: x.second){
                ans.push_back(m);
            }
            flip=!flip;
           


        }
        
            
        
        return ans;

        
        
    }
};