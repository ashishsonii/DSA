class Solution {
public:

    
    bool check(int a,int b, int c){
        
        if(a+b<=c) return false;
        if(c+b<=a) return false;
        if(c+a<=b) return false;
        return true;
    }

    // int helper(vector<int>& nums,vector<int> v,int i,int chosen){
       
       
    //     if(chosen==3) return check(v);
    //     if(v.size()>3) return 0;
    //     if(i>=nums.size()) return 0;  
        
           
        
         
       
    //     int x=helper(nums,v,i+1,chosen);
    //     v.push_back(nums[i]);
    //     int y=helper(nums,v,i+1,chosen+1);
    //     return x+y;


    // }
    

    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-2; i++){
            for(int j=i+1; j<n; j++){
                int k=j+1;
                while(k < n && nums[i] + nums[j] > nums[k]){
                    c++;
                    k++;

                }


            }
            
           
        

        }
        return c;


    }
};