class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <char> set1;
        vector <char> set2;


        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if (s==t){
            return true;
        }else{
            return false;
        }

        
    }
};