class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int n = nums.size();
        for(int i = 0; i < min(n, k); i++){
            if(freq.find(nums[i]) != freq.end()){
                return true;
            }
            freq[nums[i]]++;
        }
        for(int i = k; i < n; i++){
            if(freq.find(nums[i]) != freq.end()){
                return true;
            }
            freq[nums[i]]++;
            freq[nums[i - k]]--;
            if(freq[nums[i - k]] == 0){
                freq.erase(nums[i - k]);
            }
        }

        return false;
    }
};