class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int s=nums[0]*nums[0];
        int n=nums.size();
        for (int i=1;i<n;i++){
            if ((n)%(i+1)==0){
                s+=nums[i]*nums[i];
            }
        }
        return s;
    }
};