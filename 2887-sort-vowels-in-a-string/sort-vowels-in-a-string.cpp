class Solution {
public:
    string sortVowels(string s) {

        string t="";
        for(int i=0; i<s.length(); i++){
            if(s[i]=='a'||s[i]=='A'||s[i]=='e' || s[i]=='E'||s[i]=='i'||s[i]=='I' ||s[i]=='o'||s[i]=='O' || s[i]=='u' || s[i]=='U' ){
                t+=s[i];

            }
        }


        sort(t.begin(),t.end());


         for(int i=0; i<s.length(); i++){
            if(s[i]=='a'||s[i]=='A'||s[i]=='e' || s[i]=='E'||s[i]=='i'||s[i]=='I' ||s[i]=='o'||s[i]=='O' || s[i]=='u' || s[i]=='U' ){
                s[i]=t[0];
                t.erase(0,1);

            }
        }
        return s;
        
        
    }
};