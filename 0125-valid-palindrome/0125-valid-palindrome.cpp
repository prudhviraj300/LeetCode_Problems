class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string resString = "";

        for(char ch : s){
            if( (ch <= 57 && ch >= 48) || (ch >= 97 && ch <= 122)){
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