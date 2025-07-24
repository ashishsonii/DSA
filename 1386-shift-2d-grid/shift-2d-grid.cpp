class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> v(m*n);
        int l=0;
        for(int i=0; i<m; i++ && l<m*n){
            for(int j=0; j<n; j++&& l<m*n){
                v[l]=grid[i][j];
                l++;
                
            }
        }
        

        if((m*n)!=k){
        reverse(v.begin(),v.end());
        reverse(v.begin()+k%(m*n),v.end());
        reverse(v.begin(),v.begin()+k%(m*n));
        }
        
        for(int i=0; i<m*n; i++){
            
                grid[i/n][i%n]=v[i];
            
        }
        return grid;

      
        
        
        
        

        
       
    }
};