class Solution {
public:
int arr[1005][31];

long long helper(int n, int k, int target){
   
    if(n==0 ) return  target==0;
    if(arr[target][n]!=-1) return arr[target][n];
    
     long long ways=0;
    for(int i=1; i<=k; i++){
    if(target-i>=0 ){
        ways+=helper(n-1,k,target-i);
    }
 }
    return arr[target][n]=ways%(1000000000+7);
}

    int numRollsToTarget(int n, int k, int target) {
        memset(arr,-1,sizeof(arr));
        
        return helper(n,k,target);
        
    }
};