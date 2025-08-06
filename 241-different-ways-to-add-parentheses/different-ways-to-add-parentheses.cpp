class Solution {
public:
    vector<int> solve(string exp) {
        vector<int> result;
        for (int i = 0; i < exp.length(); i++) {
            if (exp[i] == '+' || exp[i] == '*' || exp[i] == '-') {
                
              
                    vector<int> l = solve(exp.substr(0, i));
                    vector<int> r = solve(exp.substr(i + 1));

                    for (auto x : l) {
                        for (auto y : r) {
                            if (exp[i] == '+') {
                                result.push_back(x + y);
                            } else if (exp[i] == '-') {
                                result.push_back(x - y);
                            } else
                                result.push_back(x * y);
                        }
                    }
                
            }
            
        }
         if (result.empty()) {
            result.push_back(stoi(exp));
        }

        return result;
    }
    vector<int> diffWaysToCompute(string expression) { return solve(expression);
}

 };
