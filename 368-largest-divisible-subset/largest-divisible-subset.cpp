class Solution {
public:

    // vector<long long> helper(vector<int>& nums,vector<int> take,int prev,int i){
        
    //     if(i>=nums.size()){
    //         return take;
    //     }
      
    //     vector<int>skip=take;
    //     vector<int>ans=take;
    //     if(prev==-1 || prev%nums[i]==0 || nums[i]%prev==0){
    //         take.push_back(nums[i]);
    //         ans=helper(nums,take,nums[i],i+1);

    //     }
       
    //     skip=helper(nums,skip,prev,i+1);
    //     return skip.size()>ans.size()?skip:ans;



        


    // }

    vector<int> largestDivisibleSubset(vector<int>& nums) {
        long long n=nums.size();
        if(n==1) return nums;
        sort(nums.begin(),nums.end());

        
        vector<long long> v(n,1);
        vector<long long> pre(n,-1);
        long long mx=-1;
        
        for(long long i=0; i<n; i++){
            long long j=0;
            while(j<i){
                if(nums[i]%nums[j]==0 || nums[j]%nums[i]==0 ){
                    if(v[i]<=v[j]+1) pre[i]=j;
                    v[i]=max(v[i],v[j]+1);
                    
                    if(mx==-1|| v[i]>=v[mx]){
                        mx=i;
                    }
                }
                j++;
            }
        }

        vector<int>ans;
        int i=mx;
        while(i!=-1){
            ans.push_back(nums[i]);
            i=pre[i];
        }
        if(ans.size()==0)  ans.push_back(nums[0]);
        return ans;
        
    }
};