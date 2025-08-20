class Solution {
public:
    vector<vector<int>> ans;
    int c;
   

    void comb(int i, int k, vector<int> &v) {
      
        if (v.size() == k) {
            
            ans.push_back(v);
            return;
        }
        else if (i > c || i < 1) return;
        
            v.push_back(i);
            
        
        

        comb(i+1, k,v);

        
        v.pop_back();
        

        comb(i+1, k,v);
       
        return;

}

vector<vector<int>>
combine(int n, int k) {
    c = n;
    int i = 1;
    vector<int> v;
    comb(i, k, v);
    return ans;
}
}
;