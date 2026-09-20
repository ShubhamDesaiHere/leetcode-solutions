class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            int a=int(s[i]-'a')+1;
            sum+=(i+1)*(27-a);
        }
        return sum;
        
    }
};