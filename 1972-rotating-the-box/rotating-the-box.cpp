class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m=box.size();
        int n=box[0].size();
        vector<vector<char>> res(n,vector<char>(m));
       for(int i=0; i<n; i++){
         for(int j=0; j<m; j++){
              res[i][j]=box[j][i]; 
        }
       }
        int i=0;
        while(i<n){
            reverse(res[i].begin(),res[i].end());
            i++;
        }
     for(int i = n - 1; i >=0; i--){
    for(int j = m - 1; j >= 0; j--){
       
       if(res[i][j]=='.'){
        int emptyr=i;
        int k=i-1;
        while(k>=0 && res[k][j]=='.'){
            if(res[k][j]=='*') break;
            k--;
        }
        if( k>=0&& res[k][j]=='#') swap(res[i][j],res[k][j]);
        
           
        }
        
    }
}

        return res;
        
    }
};