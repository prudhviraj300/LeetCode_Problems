import java.util.*;
class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] l = new int[n];
        int[] r = new int[n];
       
        Arrays.fill(l, 1);
        Arrays.fill(r, 1);
        for(int i = 1; i < n; i++){
            l[i] = l[i-1] * nums[i-1];
            r[n-i-1] = r[n-i] * nums[n-i];
        }
        int[] ans = new int[n];
        for(int i = 0; i < n; i++){
            ans[i] = l[i] * r[i];
        }
        return ans;
    }
}