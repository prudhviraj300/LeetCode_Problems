import java.util.*;
class Solution {
    public int specialTriplets(int[] nums) {
        int mod = 1000000007;
        int n = nums.length;

        long cnt = 0;

        HashMap<Integer, Integer> left = new HashMap<>();
        HashMap<Integer, Integer> right = new HashMap<>();


        for(int i = 2; i < n; i++ ){
            right.put(nums[i], right.getOrDefault(nums[i],0) + 1);
        }

        left.put(nums[0], 1);

        int i = 1;

        while(i < n - 1){
            int target = nums[i] * 2;
            if(left.containsKey(target) && right.containsKey(target)){
                cnt = (cnt + ( ((long)left.get(target) % mod) * ((long) right.get(target)) % mod  )) % mod;
            }

            left.put(nums[i], left.getOrDefault(nums[i], 0) + 1);

            if((right.getOrDefault(nums[i+1], 0) - 1) <= 0){
                right.remove(nums[i+1]);
            }else{
                right.put(nums[i+1], right.getOrDefault(nums[i+1],0) - 1);
            }
            i++;
        }

        return (int)cnt;
        
    }
}