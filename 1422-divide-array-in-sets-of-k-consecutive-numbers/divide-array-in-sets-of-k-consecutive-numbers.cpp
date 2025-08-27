class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {

        

        int n = nums.size();
        if (n % k != 0) return false;
        map<int,int> mp;
        for(int i=0; i<n; i++){mp[nums[i]]++;}


        while(mp.size()!=0){
            int mn=mp.begin()->first;
            for(int i=0; i<k; i++){
                int val=mn+i;
                if(mp.find(val)!=mp.end()){
                    mp[val]--;
                    if(mp[val]<=0){
                        mp.erase(val);
                    }
                }
                else return false;
            }
        }
        
        


        
        return mp.size()==0;

    }
};