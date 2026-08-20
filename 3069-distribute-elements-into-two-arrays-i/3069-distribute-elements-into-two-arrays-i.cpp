class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;

        v1.push_back(nums[0]);
        v2.push_back(nums[1]);
        int p1=0;
        int p2=0;
        for(int i=2;i<nums.size();i++){
            
            if (v1[p1]>v2[p2]){
                v1.push_back(nums[i]);
                p1++;
            }else{
                v2.push_back(nums[i]);
                p2++;
            }
        }

        for (int i=0;i<v2.size();i++){
            v1.push_back(v2[i]);
        }
        return v1;



    }
};