class Solution {
public:
    vector<vector<int>> generate(int r) {

        vector<vector<int>> v;
        
        v.push_back({1});

        for(int i=1; i<r; i++){
            vector<int>t(i+1,1);
            for(int j=1; j<i; j++){
                t[j]=v[i-1][j];
                if(j-1>=0) t[j]+=v[i-1][j-1];
                
            }
            v.push_back(t);         

        }
        return v;
        
    }
};