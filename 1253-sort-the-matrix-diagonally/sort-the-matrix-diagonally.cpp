class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        unordered_map<int,vector<int>> mp;
        int n=mat[0].size();
        int m=mat.size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                mp[i-j].push_back(mat[i][j]);
                
            }
        }

       for(auto &ele: mp){
        sort(ele.second.begin(),ele.second.end());

       }


       //insertion now

       for(int i=m-1; i>=0; i--){
        for(int j=n-1; j>=0; j--){
            mat[i][j]=mp[i-j].back();
            mp[i-j].pop_back();

        }
       }
       return mat;

    }
};