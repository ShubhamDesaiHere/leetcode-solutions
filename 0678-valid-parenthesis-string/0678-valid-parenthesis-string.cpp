class Solution {
    bool c(string& s,int n,int i,int b,vector<vector<int>>& dp ){
        bool v=false;

        if (b < 0)
            return false;

        if (i == n) {
            return b == 0;
        }
        if (dp[i][b] != -1)
            return dp[i][b];

        
        if (s[i]=='(') v =v || c(s,n,i+1,b+1,dp);
        else if  (s[i]==')') v=v || c(s,n,i+1,b-1,dp);
        else{
           v=v || c(s,n,i+1,b-1,dp);
           v=v || c(s,n,i+1,b+1,dp);
           v = v || c(s, n, i + 1, b,dp);
        }
        return dp[i][b]=v;
    }
public:
    bool checkValidString(string s) {
        if (s.size()==1 && s!="*") return false;
        int n=s.size();
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        return c(s,s.size(),0,0,dp);
    }
};