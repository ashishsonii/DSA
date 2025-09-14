class Solution {
public:
   string devowel(string s) {
        for (char &c : s) {
            c = tolower(c);
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
                c = '*';
            }
        }
        return s;
    }


   

    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string> st(wordlist.begin(), wordlist.end());
        unordered_map<string, string> lmp;
        unordered_map<string, string> novow;

         for (string w : wordlist) {
            string low = w;
            transform(low.begin(), low.end(), low.begin(), ::tolower);

            if (!lmp.count(low)) lmp[low] = w;

            string vow = devowel(low);
            if (!novow.count(vow)) novow[vow] = w;
        }

        vector<string> ans;

        for (string q : queries) {
            if (st.count(q)) {
                ans.push_back(q);
            }
            else {
                transform(q.begin(), q.end(), q.begin(), ::tolower);

                auto it = lmp.find(q);
                if (it != lmp.end()) {
                    ans.push_back(it->second);
                } else {
                    
                    string l="";
                    string devoo=devowel(q);
                 if(novow.find(devoo)!=novow.end()){
                    string ll=novow.find(devoo)->second;
                    ans.push_back(ll);
                    continue;
                   

                 }
                 else  ans.push_back(l);
                    
                }
            }
        }
        return ans;
    }
};
