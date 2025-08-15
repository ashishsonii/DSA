class Solution {
public:
     bool traverse(vector<vector<char>>& b,int r, int c){
        unordered_set<char>st;
        int k=r+2;
        int l=c+2;


        for(int i=r; i<=k; i++){
            for(int j=c; j<=l; j++){
                if(b[i][j]=='.') continue;
                else if(st.find(b[i][j])!=st.end()) return false;
                else st.insert(b[i][j]);
            }
        }
        return true;
     }
    bool isValidSudoku(vector<vector<char>>& b) {
        int m=b.size();
        int n=b[0].size();
        for(int i=0; i<m; i++){
            unordered_set<char> st;
            for(int j=0; j<n; j++){
                if(b[i][j]=='.') continue;
                if(st.find(b[i][j])!=st.end()){
                    return false;
                    
                }
                else st.insert(b[i][j]);
            }
        }

        ///coulm check 


        for(int i=0; i<n; i++){
            unordered_set<int> st;
            for(int j=0; j<m; j++){
                if(b[j][i]=='.')continue;
                if(st.find(b[j][i])!=st.end()){
                    return false;
                    
                }
                else st.insert(b[j][i]);
            }
        }

        for(int i=0; i<m; i+=3){
            for(int j=0; j<n; j+=3 ){
                if(!traverse(b,i,j)) return false;
            }
        }
        return true;
        
    }
};