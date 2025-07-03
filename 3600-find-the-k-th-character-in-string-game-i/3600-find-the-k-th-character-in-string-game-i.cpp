class Solution {
public:
    char kthCharacter(int k) {
        string ans = "a", ref = "abcdefghijklmnopqrstuvwxyz";
        while(ans.length() < k){
            string cur = ans;
            for(char ch : ans){
                cur += ref[((ch-'a') + 1) % 26];
            }
            ans = cur;
        }
        return ans[k - 1];
    }
};