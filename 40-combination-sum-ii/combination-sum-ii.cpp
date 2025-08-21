class Solution {
public:

    vector<vector<int>> ans;
    int n;
    int t;
    vector<int>v;
    set<vector<int>>st;

    void comb(vector<int>& cand, int sum,int i){
        while(i<n){
             v.push_back(cand[i]);
            sum+=cand[i];
           
            if(sum==t) {  st.insert(v);}
           else if(sum<t){ comb(cand,sum,i+1);}
           
            
            
           
           
            
            sum-=v.back();
            v.pop_back();
            int curr=cand[i];


           
            i++;
           while(i<n &&cand[i]==curr) i++;
            
           
        }
       
    }


    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        sort(cand.begin(), cand.end());
        n=cand.size();
        int sum=0;
        int i=0;
        t=target;
        comb(cand,sum,i);
        for(auto x: st){
            ans.push_back(x);
        }
        return ans;
        
    }
};