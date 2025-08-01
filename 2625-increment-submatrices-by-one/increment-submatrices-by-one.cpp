class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& q) {
       vector<vector<int>> mat(n, vector<int>(n, 0));

        

        int s=q.size();
        int l=0;
        while(l<s){
            for(int i=q[l][0]; i<=q[l][2]; i++){
                for(int j=q[l][1]; j<=q[l][3]; j++){
                    mat[i][j]+=1;


                }
            }
            l++;
        }
        return mat;
        
    }
};