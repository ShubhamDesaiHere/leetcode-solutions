class Solution {
public:
    int countCommas(int n) {
        int ans=0;
        if (n<1000){
            return 0;
        }else if (1000<n && 10000>n){
            ans= 1000*((n/1000)-1)+(n%1000)+1;
        }else{
            ans=9000;
            ans+=10000*((n/10000)-1)+(n%10000)+1;
        }
        return ans;
        
    }
};