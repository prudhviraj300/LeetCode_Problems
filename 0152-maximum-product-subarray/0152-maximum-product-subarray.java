class Solution {

    public int maxProduct(int[] nums) {
        int prod = 1;
        int ans = Integer.MIN_VALUE;
        for (int i : nums) {
            prod *= i;
            ans = Math.max(ans, prod);
            if(prod == 0)  prod = 1;
        }
        prod = 1;
        for (int i = nums.length - 1; i >= 0; i--) {
            prod *= nums[i];
            ans = Math.max(prod, ans);
            if(prod == 0)  prod = 1;
        }
        return ans;
    }
}
