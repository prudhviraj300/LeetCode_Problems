class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        vector<int> FrequencyArray(26,0);

        for(char ch : magazine){
            FrequencyArray[ch - 'a']++;
        }

        for(char ch : ransomNote){
            FrequencyArray[ch - 'a']--;
        }

        for(int i = 0; i < 26; i++){
            if(FrequencyArray[i] < 0){
                return false;
            }
        }

        return true;
    }
};