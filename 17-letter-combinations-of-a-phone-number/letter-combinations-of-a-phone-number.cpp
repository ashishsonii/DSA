class Solution {
public:

 vector<string> ans;
 void solve(string digits,unordered_map<char,string> mp,int idx,string temp){
    
    if(idx>=digits.size()){
        ans.push_back(temp);
        return;
    }
    string s=mp[digits[idx]];
   
    for(int i=0; i<s.size(); i++){
        temp.push_back(s[i]);
        solve(digits,mp,idx+1,temp);
        temp.pop_back();
       

    }
 }





    vector<string> letterCombinations(string digits) {
        unordered_map<char,string> mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        string temp="";
        if(digits.size()==0) return ans;
        solve(digits,mp,0,temp);
        return ans;
        
        
    }
};