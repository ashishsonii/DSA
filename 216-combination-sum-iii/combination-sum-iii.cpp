class Solution {
public:

   
    vector<int> v;
    vector<vector<int>> ans;
    int s;
    int t;
    

    void comb(int start,int sum){
        for(int i=start; i<=9; i++  ){
            v.push_back(i);
           
            if(sum+i==t && v.size()==s) ans.push_back(v);
             else if (sum + i < t && v.size() < s) {
                comb(i + 1, sum + i);
            }
            
            v.pop_back();
        }
    }


    vector<vector<int>> combinationSum3(int k, int n) {
        s=k;
        t=n;
        comb(1,0);
        return ans;



        
    }
};