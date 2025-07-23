class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>v;
        
        for(int i=0; i<n; i++){
            int mx=-2;
            for(int j=0; j<m; j++){
                
                if(matrix[j][i]==-1){
                    
                   
                    v.push_back(j);
                }
                else mx=max(mx,matrix[j][i]);


            }
            while(v.size()!=0){
                int n=v.size();
                int k=v[n-1];
                matrix[k][i]=mx;
                v.pop_back();
                
            }
        }
        return matrix;
        
    }
};