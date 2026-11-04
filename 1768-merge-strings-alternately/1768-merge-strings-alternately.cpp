class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int word1Len = word1.length();
        int word2Len = word2.length();
        int i = 0;
        int j = 0;

        while(i < word1Len && j < word2Len){
            res += word1[i];
            res += word2[j];
            i++;
            j++;
        }
        while(i < word1Len){
            res += word1[i];
            i++;
        }
        while(j < word2Len){
            res += word2[j];
            j++;
        }

        return res;
    }
};