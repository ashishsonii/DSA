class Solution {
public:
    vector<string> ans;
    unordered_map<char, string> mp = {{'2', "abc"}, {'3', "def"}, {'4', "ghi"},
                                      {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
                                      {'8', "tuv"}, {'9', "wxyz"}};

    void doo(string digits, string temp, int idx) {
        if (idx >= digits.size()) {
            ans.push_back(temp);
            return;
        }
        string s = mp[digits[idx]];
        for (int i = 0; i < s.size(); i++) {
            temp.push_back(s[i]);
            doo(digits, temp, idx + 1);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};

        doo(digits, "", 0);
        return ans;
    }
};