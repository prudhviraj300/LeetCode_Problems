class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr(501, 0);
        for(int i : nums){
            arr[i]++;
        }
        vector<int> pref(501, 0);
        for(int i  = 1; i < 501; i++){
            pref[i] = arr[i - 1] + pref[i - 1];
        }

        for(int i = 0; i < nums.size(); i++){
            nums[i] = pref[nums[i]];
        }

        return nums;

    }
};