class Solution {
public:
    int m,n,l;
    vector<vector<int>> direct{{0,1},{1,0},{-1,0},{0,-1}};

    bool find(vector<vector<char>>& board,int i, int j,int idx,string word){
        if(idx>=l) return true;
        if(i<0 || j<0|| i>=m||j>=n || word[idx]=='$') return false;
        if(word[idx]!=board[i][j]) return false;
        char temp=board[i][j];
        board[i][j]='$';
        for(auto &dir: direct){
            int i_=i+dir[0];
            int j_=j+dir[1];
            if(find(board,i_,j_,idx+1,word)) return true;
            
        }
        board[i][j]= temp;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        l=word.length();
        m=board.size();
        n=board[0].size();

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(word[0]==board[i][j] && find(board,i,j,0,word)) {return true;}
            }
        }
        return false;

        
    }
};