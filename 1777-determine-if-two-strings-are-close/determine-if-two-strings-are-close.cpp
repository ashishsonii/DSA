class Solution {
public:
    bool closeStrings(string word1, string word2) {
        sort(word1.begin(),word1.end());
        sort(word2.begin(),word2.end());
        unordered_map<char,int> mp;
        unordered_map<char,int> mp2;
        int n=word1.size();
        if(word2.size()!=n)return false;
        for(int i=0; i<n; i++){
           mp[word1[i]]++;
           mp2[word2[i]]++;
        }

        for(int i=0; i<n; i++){
            if(mp2.find(word1[i])==mp2.end()){
                return false;
            }
        }



        vector<int> v1;
        vector<int> v2;
        for(auto ele :mp){
            v1.push_back(ele.second);
        }
        for(auto ele :mp2){
            v2.push_back(ele.second);
        }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    return v1 == v2;

        

        
    }
};