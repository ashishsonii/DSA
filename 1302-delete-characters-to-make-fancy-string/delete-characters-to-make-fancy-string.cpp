class Solution {
public:
    string makeFancyString(string s) {
        
        int k=2;
        int n=s.length();
        string r="";
        if(n>=1){
            r+=s[0];
            
        }
        if(n>=2){
            r+=s[1];
        }
        while(k<n && n>=3){
           if(s[k] == s[k-1] && s[k-1] == s[k-2]){
            k++;
            continue;
            }
            else {
            r+=s[k];
            
            }
            k++;


        }
        return r;
       
    }
};