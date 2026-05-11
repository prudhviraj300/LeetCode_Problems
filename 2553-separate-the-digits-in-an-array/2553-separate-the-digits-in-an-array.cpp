class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        string digits = "";
        for(int i : nums){
            digits += to_string(i);
        }
        for(char ch: digits){
            int val = ch - '0';
            res.push_back(val);
        }
        return res;
    }
};