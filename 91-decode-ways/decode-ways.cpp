class Solution {
public:

    int decod(string s,int i, vector<int>&dp){
        if (i == s.size()) return 1;       
        if (s[i] == '0') return 0;
        if(dp[i]!=-1) return dp[i];
        int ways=decod(s,i+1,dp);
        if(i+1<s.length()){
            int num=stoi(s.substr(i, 2)); 
            if(num>=10 && num<=26){
                ways+=decod(s,i+2,dp);
            }
        }
        return dp[i]=ways;
       
    }



    int numDecodings(string s) {

        for(int i=1; i<s.length(); i++){
            if(s[i]=='0'&& s[i-1]>'2') return 0 ;
        }
        vector<int>v(s.length(),-1);
        
        return decod(s,0,v);

      
        
    }
};