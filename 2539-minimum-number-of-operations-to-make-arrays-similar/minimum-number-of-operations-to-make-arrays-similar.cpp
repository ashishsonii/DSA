class Solution {
public:
    long long makeSimilar(vector<int>& nums, vector<int>& target) {
        
      long long tincrease=0;
        int tdecrease=0;
        vector<int>even;
        vector<int>teven;
        sort(nums.begin(),nums.end());
        sort(target.begin(),target.end());
        int i=0;

        while(i<nums.size()){
            if(target[i]%2==0) teven.push_back(target[i]);
            if(nums[i]%2==0) even.push_back(nums[i]);
            i++;
        }
        i=0;
        while(i<nums.size()){
            if(target[i]%2!=0) teven.push_back(target[i]);
            if(nums[i]%2!=0) even.push_back(nums[i]);
            i++;
        }
         


       
        for(int i=0; i<even.size(); i++){
            int t=teven[i];
            if(even[i]<t){
                
                 tincrease+= (t-even[i])/2;
                
                
            }
            
        }
        return tincrease;

    }
};