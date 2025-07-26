class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& ma) {

        int m=ma.size();
        int n=ma[0].size();
        long long sum=0;
        int mxneg=INT_MAX;
        int negcount=0;
        int z=-1;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                sum+=abs(ma[i][j]);
                mxneg=min(abs(mxneg),abs(ma[i][j]));

                if(ma[i][j]==0) z=1;
                if(ma[i][j]<0) negcount++;

                
            }

        }
        if(z==1 || negcount%2==0) return sum;
        else return sum-(2*mxneg);
        
    }
};