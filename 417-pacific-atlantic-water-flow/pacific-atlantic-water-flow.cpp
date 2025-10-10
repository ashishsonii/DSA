class Solution {
public:
    int m, n;

    
    vector<vector<int>> dir = {{1,0}, {-1,0}, {0,1}, {0,-1}};
    void dfs(vector<vector<int>>& h,int i,int j,int prev,vector<vector<bool>>& vis){
        m = h.size();
        n = h[0].size();

        if(i>=m || i<0 || j<0|| j>=n || prev>h[i][j] || vis[i][j] ) return;
        vis[i][j]=true;
        for(auto &x: dir){
            int i_=i+x[0];
            int j_=j+x[1];
            dfs(h,i_,j_,h[i][j],vis);
        }
        
    }


    



     




    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
        m = h.size();
        n = h[0].size();
        vector<vector<bool>> pac(m,vector<bool>(n,false));
        vector<vector<bool>> atla(m,vector<bool>(n,false));
        vector<vector<int>> res;

        for(int i=0; i<m; i++){
            dfs(h,i,0,INT_MIN,pac);
            dfs(h,i,n-1,INT_MIN,atla);
        }



        for(int i=0; i<n; i++){
            
            dfs(h,0,i,INT_MIN,pac);
            dfs(h,m-1,i,INT_MIN,atla);
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(pac[i][j] && atla[i][j]) res.push_back({i,j});
            }
        }
        return res;




        

        
    }

    

   
};