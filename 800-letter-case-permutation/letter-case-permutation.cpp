class Solution {
public:
    vector<string> ans;

    void solve(string s, int i, string temp) {
        if (i == s.length()) {
            ans.push_back(temp);
            return;
        }

        char ch = s[i];

        if (isalpha(ch)) { // if it's a letter
            // lowercase branch
            solve(s, i + 1, temp + (char)tolower(ch));
            // uppercase branch
            solve(s, i + 1, temp + (char)toupper(ch));
        } else { // if it's a digit or non-letter
            solve(s, i + 1, temp + ch);
        }
    }

    vector<string> letterCasePermutation(string s) {
        solve(s, 0, "");
        return ans;
    }
};
