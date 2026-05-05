class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string resString = "";

        for(char ch : s){
            if(isalnum(ch)){
                resString += ch;
            }
        }

        if(resString == ""){
            return true;
        }

        int len = resString.length();

        for(int i = 0; i < len/2; i++){
            if(resString[i] != resString[len - i - 1]){
                return false;
            }
        }

        return true;
    }
};