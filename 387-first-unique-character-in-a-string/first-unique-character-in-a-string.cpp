class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        int n=s.length();
        for(char a: s){
            mp[a]++;
            
        }
        int i=0;
        while(i<n){
            if(mp.count(s[i])!=0){
                if(mp[s[i]]==1) return i;
            }
            i++;
        }
        return -1;
    }
};