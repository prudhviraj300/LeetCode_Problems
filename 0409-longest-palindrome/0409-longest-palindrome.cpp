class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;

        for(char ch : s){
            freq[ch]++;
        }
        int ans = 0, hasOdd = 0;
        for(auto i : freq){
            if(i.second % 2 == 0){
                ans += i.second;
            }else{
                ans += i.second - 1;
                hasOdd = 1;
            }
        }
        return (hasOdd == 1)? ans + 1 : ans;
    }
};