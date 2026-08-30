class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int mx = nums[0], mi = nums[0];
        for (int x : nums) {
            mx = max(mx, x);
            mi = min(mi, x);
        }

        int i = 0, c = 0;
        while (nums[i] != mx && nums[i] != mi) {
            c++;
            i++;
        }

        i++;                  // move past the first extreme element
        int c2 = c + 1;

        while (i < n && nums[i] != mx && nums[i] != mi) {
            c2++;
            i++;
        }

        return min({n - c, c2 + 1, c + 1 + n - c2});
    }
};