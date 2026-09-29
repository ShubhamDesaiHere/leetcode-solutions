class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <char> set1;
        vector <char> set2;

        //for (char  x:s){
           // set1.push_back(x);
        //}
        //for (char  x:t){
          //  set2.push_back(x);
        //}
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if (s==t){
            return true;
        }else{
            return false;
        }

        
    }
};