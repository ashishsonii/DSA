class Solution {
public:
    string makeFancyString(string s) {
        int n = s.length();
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (j >= 2 && s[j - 1] == s[j - 2] && s[j - 2] == s[i]) continue;

            s[j] = s[i];
            j++;
        }
        return s.substr(0,j);
    }
};