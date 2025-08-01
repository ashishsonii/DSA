class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& q) {
       vector<vector<int>> mat(n, vector<int>(n+1, 0));

        

        int s=q.size();
        for(auto ele: q){
            int fr=ele[0];
            int sr=ele[2];
            int fc=ele[1];
            int sc=ele[3];
            for(int i=fr; i<=sr; i++){
                mat[i][fc]+=1;
                mat[i][sc+1]-=1;
            }

        }
        int sum;
        for(int i=0; i<n; i++){
            sum=0;
            for(int j=1; j<n+1; j++){
                
                    mat[i][j]+=mat[i][j-1]; 

               
               
                

               
            }

        }
        int l=0;
        while(l<n){
            mat[l].pop_back();
            l++;

        }

       
            
            
   
        return mat;
        
    }
};