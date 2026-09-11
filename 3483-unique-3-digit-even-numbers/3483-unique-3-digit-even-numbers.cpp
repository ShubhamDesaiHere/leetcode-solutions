class Solution {
public:
    int totalNumbers(vector<int>& digits) {

        int cnt[10] = {};

        for (int x : digits)
            cnt[x]++;

        int ans = 0;

        // Choose units digit
        for (int u = 0; u <= 8; u += 2) {

            if (cnt[u] == 0)
                continue;

            cnt[u]--;

            // Choose hundreds digit
            for (int h = 1; h <= 9; h++) {

                if (cnt[h] == 0)
                    continue;

                cnt[h]--;

                // Choose tens digit
                for (int t = 0; t <= 9; t++) {

                    if (cnt[t] > 0)
                        ans++;
                }

                cnt[h]++;
            }

            cnt[u]++;
        }

        return ans;
    }
};