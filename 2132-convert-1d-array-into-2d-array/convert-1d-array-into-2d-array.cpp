class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& ogi, int m, int n) {
        vector<vector<int>> vv(m,vector<int>(n) );
        int z=ogi.size();
        int p =0;
        if(z!=m*n) return {};
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++ ){
                vv[i][j]=ogi[p]; 
                p++;
            }
        }
        return vv;

        
    }
};