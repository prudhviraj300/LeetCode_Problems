class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> countArray(26,0);

        for(char ch : s){
            countArray[ch - 'a']++;
        }
        for(char ch : t){
            countArray[ch - 'a']--;
        }

        for(int i = 0; i < 26; i++){
            if(countArray[i] != 0){
                return false;
            }
        }

        return true;

    }
};