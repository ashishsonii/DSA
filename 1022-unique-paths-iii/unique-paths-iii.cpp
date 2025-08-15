class Solution {
public:
     int u,m,n,z;
     vector<vector<int> >direct{{0,1},{1,0},{-1,0},{0,-1}};
     void check(vector<vector<int>>& grid,int i, int j,int visited){
        
       if(i<0 || j<0 || i>=m  || j>=n) return;
       if(grid[i][j]==2 &&  visited==z+2){
        u++;
        return;
       }
        else if(grid[i][j]==-1) return;
        else if(grid[i][j]==9) return;
  
       int temp=grid[i][j];
       grid[i][j]=9;
       for(auto &dir: direct){
        int i_=i+dir[0];
        int j_=dir[1]+j;
        check(grid,i_,j_,visited+1);
       }
       grid[i][j]=temp;
       return;

     }
    int uniquePathsIII(vector<vector<int>>& grid) {
        u=0;
        m=grid.size();
        n=grid[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==0) z++;   
                
            }
        }







        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                check(grid,i,j,1);
                return u;
                }
            }
           
        }
        return u;
        
        
    }
};