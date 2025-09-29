class Solution {
public:

    int arr[51][101][51];
    
   
    int helper(int n, int m, int k,int mx ){

       if (n == 0) return (k == 0);
        if (k < 0) return 0;
        if(mx!=-1 &&arr[n][mx][k]!=-1) return arr[n][mx][k];
        int take =0;
       
        for(int i=1; i<=m; i++){                
                if(i>mx) take = (take +helper(n-1,m,k-1,i))%1000000007;
                else take= (take +helper(n-1,m,k,mx) )% 1000000007;
            }
             if(mx!=-1) return arr[n][mx][k]=take%1000000007;
              return take%1000000007;       
        }

      

    

    int numOfArrays(int n, int m, int k) {
        memset(arr,-1,sizeof(arr));
        return helper(n,m,k,-1);
        
    }
};