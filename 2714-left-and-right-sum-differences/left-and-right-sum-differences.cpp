class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

        int n=nums.size();
        vector<int> l(n,0);
        if(n==1) return l;

       
        vector<int> r(n,0);

        int i=1;
        int j=n-2;

        while(i<n || j>=0 ){
            l[i]=nums[i-1]+l[i-1];
            r[j]=nums[j+1]+r[j+1];
            i++;
            j--;

        }
        vector<int>a(n);
        for(int i=0; i<n; i++){
             a[i] = abs(l[i] - r[i]);
            
        }
        return a;
        
        
    }
};