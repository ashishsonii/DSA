class Solution {
public:
    int canBeTypedWords(string text, string br) {
        vector<string> vs;
        for(int i=0; i<text.length(); i++){
            string s="";
            while(i<text.length() && text[i]!=' '){
                s+=text[i];
                i++;

            }
           
            vs.push_back(s);
        }
        int cm=0;
        unordered_set<char> st;
        for(auto ch: br){
            st.insert(ch);
        }
        for(int i=0; i<vs.size(); i++){
            string ss=vs[i];
            for(int j=0; j<ss.length(); j++){
                if(st.find(ss[j])!=st.end()){
                  
                   cm++;
                   break;
                }
               
                
            }
        }
        return vs.size()-cm;
    }
       
};