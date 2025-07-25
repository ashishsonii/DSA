class Solution {
public:
    void rot(vector<vector<int>> &mat ,int n){
         for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
               swap(mat[i][j],mat[j][i]);
               
               
            }
        }
        for(int i=0; i<n; i++){
            reverse(mat[i].begin(),mat[i].end());
           
        }
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
       
        for(int i=0; i<4; i++){
            rot(mat,n);
            if(mat==target) return true;
        }
        
        return false;
        
    }
};