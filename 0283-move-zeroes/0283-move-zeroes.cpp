class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int m=0;
        for(int i=0;nums.size()>i;i++){
            if (nums[i] != 0){
                swap(nums[i],nums[m]);
                m++;    
                }
            }
        
        }
        
    
};