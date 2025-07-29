class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        int n=arr.size();
        
        for(int i=0; i<n; i++){
           
            int rem = ((arr[i] % k) + k) % k;
            mp[rem]++;

        }
      for(auto ele: mp){
        if(ele.first==0 ) { if(ele.second%2!=0)return false;}
        else if(mp.find(k-ele.first)==mp.end() || mp[k-ele.first]!=ele.second) return false;  
      }
       return true;
        
    }
};