class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();
        if(n < 2){
            return 0;
        }
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }
        int cnt = 0;
        for(int i = 0; i < n; i++){
            int target = k - nums[i];

            if(mp[nums[i]] > 0 && mp[target] > 0){
                if(nums[i] == target && mp[target] < 2){
                    continue;
                }
                cnt++;
                mp[nums[i]]--;
                mp[target]--;
            }
        }

        return cnt;
    }
};