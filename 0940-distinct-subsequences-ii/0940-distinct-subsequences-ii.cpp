class Solution {
public:
    int distinctSubseqII(string s) {
        const int MOD = 1e9 + 7;

        map<char, long long> mp;

        long long total = 0;

        for (char c : s) {
            long long old = mp[c];

            // New subsequences formed by adding c
            long long add = (total + 1) % MOD;

            mp[c] = add;

            // Remove old contribution of c to avoid duplicates
            total = (total + add - old + MOD) % MOD;
        }

        return total;
    }
};