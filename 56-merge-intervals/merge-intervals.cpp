class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int i=0;
        int st=intervals[i][0];
        int cend=intervals[i][1];
        ans.push_back({st,cend});

        for(int i=1; i<n; i++){
            
            
            if(i<n && cend>=intervals[i][0] ){
               ans[ans.size()-1][0]=min(st,intervals[i][0]);
               ans[ans.size()-1][1]=max(cend,intervals[i][1]);
               st=min(st,intervals[i][0]);
               cend=max(cend,intervals[i][1]);
               
            }
            else {
                ans.push_back({intervals[i][0],intervals[i][1]});
                st=intervals[i][0];
               cend=intervals[i][1];
            
            }

        }
        
        return ans;
        
    }
};