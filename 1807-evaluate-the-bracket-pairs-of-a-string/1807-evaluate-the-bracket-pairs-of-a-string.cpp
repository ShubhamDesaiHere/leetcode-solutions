class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {

        // 1. Add key-value pairs in dictionary
        unordered_map<string, string> mp;

        for (auto x : knowledge) {
            mp[x[0]] = x[1];
        }

        string ans = "";

        // 2. Look for characters in s
        for (int i = 0; i < s.length(); i++) {

            // 3. If '(' occurs
            if (s[i] == '(') {

                string key = "";

                i++;  // move after '('

                // Take characters until ')'
                while (s[i] != ')') {
                    key += s[i];
                    i++;
                }

                // 4. Check key in dictionary
                if (mp.find(key) != mp.end()) {
                    ans += mp[key];
                }
                else {
                    ans += "?";
                }
            }

            // 5 & 6. If no '(' found
            else {
                ans += s[i];
            }
        }

        // 7. Return answer
        return ans;
    }
};