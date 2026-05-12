class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len = 0;
        int curLen = 0;
        for(int i : nums){
            if(i == 1){
                curLen++;
                len = max(len, curLen);
            }else{
                curLen = 0;
            }
        }

        return len;
    }
};