class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum = nums[0] , subarraySum = nums[0];

        for(int i = 1; i < nums.size(); i++){
            curSum = max(nums[i], curSum + nums[i]);
            subarraySum = max(curSum, subarraySum);
        }

        return subarraySum;
    }
};