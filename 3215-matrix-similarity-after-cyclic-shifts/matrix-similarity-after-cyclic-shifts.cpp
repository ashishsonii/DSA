class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {

        int m = mat.size();
        int n = mat[0].size();
        k=k%n;
        for (int i = 0; i < m; i++) {
            vector<int> v(n);
            for (int j = 0; j < n; j++) {
                if (i % 2 == 0) {

                    v[(j - k + n) % n] = mat[i][j];

                }
            else   v[(j + k) % n] = mat[i][j];
                    
           
        }
         int d = 0;
            while (d < n) {
                if (mat[i][d] != v[d]) return false;
                d++;
            }
       
    }
    return true;
    }
};