class Solution {
public:


    vector<int>v;
    int t;
    vector<vector<int>> ans;
    unordered_set<int> st;
    int n;

    void combi(vector<int>& cand, int sum,int i){

        while(i<n){
            
           
            if(sum==t) {ans.push_back(v); return;}
            if(sum>t) return;
            v.push_back(cand[i]);
            combi(cand,sum+cand[i],i);
            v.pop_back();
            i++;
           
            
        }
        return;

    }



    vector<vector<int>> combinationSum(vector<int>& cand, int target) {
         t= target;
         int sum=0;
         int i=0;
         n=cand.size();
         combi(cand,sum,i);
         return ans;
         
    }
};