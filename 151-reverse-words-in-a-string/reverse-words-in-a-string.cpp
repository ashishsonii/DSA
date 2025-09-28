class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        int n=s.size();
        int i=0;
        while(i<n){
            string t;
            while(i<n && s[i]!=' '){
                t+=s[i];
                i++;

            }
           
           
           if(!t.empty()) v.push_back(t);
             
            while(i<n &&s[i]==' ') i++;
            
        }
        reverse(v.begin(),v.end());
        string ans;
        for(int i=0; i<v.size(); i++){
            ans+=v[i];
            if(i!=v.size()-1)ans+=" ";
            
        }
        return ans;
    }
};