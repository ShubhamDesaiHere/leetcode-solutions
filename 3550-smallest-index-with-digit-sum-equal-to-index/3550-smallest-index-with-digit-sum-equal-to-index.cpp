class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for (int i=0;i<n;i++){
            int s=0;
            int c=nums[i];
            while(c>0){
                s+=c%10;
                c=c/10;
            }
            if (s==i && c==0) return i;
        }
        return -1;
        
    }
};