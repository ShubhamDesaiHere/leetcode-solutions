class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> v1(n, -1);
        v1[0] = nums[0];

        // Prefix maximum
        for (int i = 1; i < n; i++) {
            v1[i] = max(v1[i - 1], nums[i]);
        }

        vector<int> v(n, -1);
        v[n - 1] = nums[n - 1];

        // Suffix minimum
        for (int i = n - 2; i >= 0; i--) {
            v[i] = min(v[i + 1], nums[i]);
        }

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            ans[i] = v1[i] - v[i];

            if (ans[i] <= k) {
                return i;
            }
        }

        return -1;
    }
};