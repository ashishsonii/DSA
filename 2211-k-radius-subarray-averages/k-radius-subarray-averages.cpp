class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==0) return nums;
        vector<int> v(n,-1);
        if (n < 2 * k + 1) return vector<int>(n, -1); 
    
        
        long long wl=0;
        long long wr=0;
        int i=0;

        while( i<n && i!=k){
            wl+=nums[i];
            i++;
        }
        int y=i+1;
        
        while(y<n && y-i<=k){
            wr+=nums[y];
            y++;
            
            
        }
       
       
        v[i] = (wl + nums[i] + wr) / (2*k + 1);

        

        
        for(int i=k+1; i+k<n; i++){          
            wl -= nums[i-k-1];
            wl+=nums[i-1];
            wr+=nums[i+k];
            wr-=nums[i];
            v[i]=(nums[i]+wl+wr)/(k+k+1);


        }
        return v;
        
    }
};