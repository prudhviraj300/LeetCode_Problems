class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int len = nums.size();
        vector<int> minArray(len);
        vector<int> maxArray(len);
        vector<int> ans(len);
        maxArray[0] = nums[0];
        for(int i = 1; i < len; i++){
            maxArray[i] = max(nums[i], maxArray[i - 1]);
        }

        minArray[len - 1] = nums[len - 1];
        for(int i = len - 2; i >= 0; i--){
            minArray[i] = min(nums[i], minArray[i + 1]);
        }

        ans[len - 1] = maxArray[len - 1];

        for(int i = len - 2; i >= 0; i--){
            if(maxArray[i] > minArray[i + 1]){
                ans[i] = ans[i + 1];
            }else{
                ans[i] = maxArray[i];
            }
        }
        return ans;

    }
};