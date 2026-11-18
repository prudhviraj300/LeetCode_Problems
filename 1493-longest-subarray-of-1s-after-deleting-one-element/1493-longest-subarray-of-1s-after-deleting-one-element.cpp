class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int len = 0;
        int no_of_zeroes = 0;
        int j = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                no_of_zeroes++;
            }
            while(no_of_zeroes > 1){
                if(nums[j] == 0){
                    no_of_zeroes--;
                }
                j++;
            }
            len = max(len, i - j);
        }

        return len;

    }
};