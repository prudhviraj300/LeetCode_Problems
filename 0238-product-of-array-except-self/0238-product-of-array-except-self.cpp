class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = size(nums);
        vector<int> pref(n, 1);
        vector<int> suff(n, 1);

        for(int i = 1; i < n; i++){
            pref[i] = pref[i - 1] * nums[i - 1];
            cout << pref[i] << endl;
            suff[n - 1 - i] = suff[n - i] * nums[n - i];
            cout << suff[i] << endl;
        }
        for(int i = 0; i < n; i++){
            nums[i] = pref[i] * suff[i];
        }

        return nums;
    }
};