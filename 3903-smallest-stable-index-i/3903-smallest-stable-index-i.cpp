class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> v(n, -1);
        v[n - 1] = nums[n - 1];

        // Suffix minimum
        for (int i = n - 2; i >= 0; i--) {
            v[i] = min(v[i + 1], nums[i]);
        }

        int ma= -1;
        int ans=-1;

        // Prefix maximum
        for (int i = 0; i < n; i++) {
            ma=max(ma,nums[i]);
            
            ans = ma - v[i];

            if (ans <= k) {
                return i;
            }
        }

        

        
        return -1;
    }
};