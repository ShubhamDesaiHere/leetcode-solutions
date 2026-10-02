class Solution {
public:
    void solve(int n, int open, int close, string s, vector<string>& ans) {
        
        // If we used all brackets
        if (s.length() == 2 * n) {
            ans.push_back(s);
            return;
        }

        // Add '(' if we still have some left
        if (open < n) {
            solve(n, open + 1, close, s + '(', ans);
        }

        // Add ')' only when it won't make the string invalid
        if (close < open) {
            solve(n, open, close + 1, s + ')', ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;

        solve(n, 0, 0, "", ans);

        return ans;
    }
};