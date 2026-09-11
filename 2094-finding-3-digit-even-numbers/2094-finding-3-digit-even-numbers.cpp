class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        
   int cnt[10] = {};
    vector<int> re;

        for (int x : digits)
            cnt[x]++;

        

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
                        re.push_back(h*100+t*10+u);
                }

                cnt[h]++;
            }

            cnt[u]++;
        }
        sort(re.begin(),re.end());
        return re;
    }
};