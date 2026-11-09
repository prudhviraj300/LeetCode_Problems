class Solution {
public:

    int gcd(int i, int j){
        if(j == 0){
            return i;
        }
        return gcd(j, (i % j));
    }

    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 != str2 + str1){
            return "";
        }

        int len = gcd(str1.length(), str2.length());

        return str1.substr(0, len);
        
    }
};