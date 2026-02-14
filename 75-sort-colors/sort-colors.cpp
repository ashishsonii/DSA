class Solution {
public:

    void sw(vector<int> &v,int i,int j){
        
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    void sortColors(vector<int>& nums) {
       

       int s=0;
       int end=nums.size()-1;
       int mid=0;
       while(mid <= end){
        if(nums[mid]==0){
            sw(nums,mid,s);
            s++;
            mid++;
        }
        else if(nums[mid]==2){
            sw(nums,mid,end); end--;
           
            
        }
        else if(nums[mid]==1){
            mid++;
        }
       
       }        
    }
    
};