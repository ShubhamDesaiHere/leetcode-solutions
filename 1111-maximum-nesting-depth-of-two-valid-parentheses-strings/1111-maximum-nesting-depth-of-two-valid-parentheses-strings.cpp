class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
         vector<int> ans;
         int v=0;
         for(auto& c :seq){
            if (c=='('){
                ans.push_back(v%2);
                v++;
            }else{
                v++;
                ans.push_back(v%2);
            }
         }
         return ans;
        
    }
};