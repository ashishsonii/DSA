class Solution {
public:

    int dp[1010][1002];

    bool check(string curr, string prev){
        int c=0;
        int p=prev.size();
        int cr=curr.size();
       
        if(p+1!=cr) return false;
   
        int i=0;
        int j=0;
        int ct=0;
        while(i<cr && j<p){
            if(curr[i]!=prev[j]){
                i++;
                ct++;
                if(ct>1) return false;
            }
            else{i++;
            j++;}
        }
       return j == prev.size();;
    }

    int helper(vector<string>& words,int prev,int i){
        if(i>=words.size())return 0;
        if(prev!=-1 && dp[i][prev]!=-1) return dp[i][prev];

        int take = 0;
        if(prev==-1 || check(words[i],words[prev])){
            take=1+helper(words,i,i+1);

        }
        int skip=helper(words,prev,i+1);
       if(prev!=-1) return dp[i][prev]= max(take,skip);
       return max(take,skip);
    }
    int longestStrChain(vector<string>& words) {
        memset(dp,-1,sizeof(dp));
        sort(words.begin(),words.end(),[](const string&a, const string&b){
            return a.size()<b.size();
        });
        return  helper(words,-1,0);
    }
};