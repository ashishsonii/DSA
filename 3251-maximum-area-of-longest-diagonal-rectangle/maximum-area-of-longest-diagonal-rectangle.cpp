class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        int mxarea=0;


        int n=d.size();
        int mx=0;
        
        for(int i=0; i<n; i++){
            int area=d[i][0] *d[i][1];
            int hyp=(d[i][0]*d[i][0]) +(d[i][1]*d[i][1]);
            if(hyp>mx || (hyp==mx && area>mxarea)){
                mx=hyp;
                mxarea=area;
                
            }
            

        }
        
        return mxarea;
        
    }
};