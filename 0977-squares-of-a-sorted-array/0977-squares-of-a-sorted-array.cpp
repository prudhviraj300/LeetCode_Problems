class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int l = 0;
        int r = nums.size() - 1;
        while(l <= r){
            int s1 = nums[l] * nums[l];
            int s2 = nums[r] * nums[r];
            if(s1 > s2){
                ans.insert(ans.begin(), s1);
                l++;
            }else{
                ans.insert(ans.begin(), s2);
                r--;
            }
        }

        return ans;
    }
};