class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int arr_len = 0;
        int num_zeroes = 0;
        int n = nums.size();
        int j = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                num_zeroes++;
            }

            while(num_zeroes > k){
                if(nums[j] == 0){
                    num_zeroes--;
                }
                j++;
            }
            int len = i - j + 1;
            arr_len = max(arr_len, len);

            
        }
        return arr_len;
    }
};