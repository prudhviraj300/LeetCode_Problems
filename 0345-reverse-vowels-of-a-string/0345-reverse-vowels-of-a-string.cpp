class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> st = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int h = s.length() - 1;
        int l = 0;

        while(l < h){
            if(st.count(s[l]) == 1 && st.count(s[h]) == 1){
                s[l] = s[l] ^ s[h];
                s[h] = s[l] ^ s[h];
                s[l] = s[l] ^ s[h];

                l++;
                h--;
            }
            if(st.count(s[l]) == 1 && st.count(s[h]) != 1){
                h--;
            }
            if(st.count(s[h]) == 1 && st.count(s[l]) != 1){
                l++;
            }
            if(st.count(s[l]) != 1 && st.count(s[h]) != 1){
                l++;
                h--;
            }
        }

        return s;

        
    }
};