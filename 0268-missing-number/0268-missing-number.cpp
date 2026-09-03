class Solution {
public:

    int missingNumber(vector<int>& nums) {

        int xorValue = nums.size();

        for (int i = 0; i < nums.size(); i++) {

            // XOR with expected number
            xorValue ^= i;

            // XOR with actual number
            xorValue ^= nums[i];
        }

        return xorValue;
    }
};