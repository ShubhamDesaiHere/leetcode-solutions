class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int max_len = 1;
        int inc_len = 1;
        int dec_len = 1;
        
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) {
                inc_len++;
                dec_len = 1; // reset decreasing streak
            } else if (nums[i] < nums[i - 1]) {
                dec_len++;
                inc_len = 1; // reset increasing streak
            } else {
                // If elements are equal, neither strictly increasing nor decreasing
                inc_len = 1;
                dec_len = 1;
            }
            
            max_len = max({max_len, inc_len, dec_len});
        }
        
        return max_len;
    }
};