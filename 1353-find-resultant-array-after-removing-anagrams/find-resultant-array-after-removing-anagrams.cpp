class Solution {
public:

    bool check(string a,string b){
        if(a.size()!=b.size()) return false;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int n=b.size();
        int i=0;
        while(i<n){
            if(a[i]!=b[i]) return false;
            i++;
        }
        return true;
    }

    vector<string> removeAnagrams(vector<string>& words) {
        if(words.size()==1) return words;
        
        for(int i=1; i<words.size(); i++){
            if(check(words[i],words[i-1])) {
            words.erase(words.begin() + i);
            i--;
            }
        }
        return words;
    }
};