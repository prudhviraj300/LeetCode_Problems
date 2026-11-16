class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        int len = t.length();
        while(i < len){
            if(s[j] == t[i]){
                j++;
            }
            i++;
        }
        
        return j == s.length();
    }
};