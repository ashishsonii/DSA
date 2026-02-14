class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>v;


        int i=0;
        while(i<3){
            for(int j=0; j<nums.size(); j++){
                if(nums[j]==i){
                    v.push_back(i);
                }
            }
            i++;


        }
        

        for(int j=0; j<nums.size(); j++){
           nums[j]=v[j];
            }

    
        
    }
};