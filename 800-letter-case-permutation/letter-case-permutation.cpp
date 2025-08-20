class Solution {
public:

    unordered_set<char> st;
    vector<string> ans;



    void solve(string s,int i,string &temp){
         if(temp.length()==s.length()){
              ans.push_back(temp);
              return;
            }
            if(i==s.length()){ans.push_back(temp);
              return;}
       
        if(st.find(s[i])!=st.end()){
            
            temp+=toupper(s[i]); 
            solve(s,i+1,temp);
            temp.pop_back();
           temp += tolower(s[i]); 
            solve(s,i+1,temp);
            temp.pop_back();
           

        }
        else {temp.push_back(s[i]);
        solve(s,i+1,temp);
        temp.pop_back();
        }
        return;
    }


    vector<string> letterCasePermutation(string s) {
       

   
    for(char ch = 'A'; ch <= 'Z'; ch++) {
        st.insert(ch);
    }

    
    for(char ch = 'a'; ch <= 'z'; ch++) {
        st.insert(ch);

    }
    int i=0;
    string temp = "";

    solve(s,i,temp);
    return ans;
        
    }
};