class Solution {
    public int[] findErrorNums(int[] nums) {

        long sum = 0;
        int len = nums.length;
        int repeatNum = 0;

        long actSum = (long)(len * (len + 1)) / 2;

        HashMap<Integer, Integer> mp = new HashMap<>();

        for(int i = 0; i < nums.length; i++) {

            sum += nums[i];

            mp.put(nums[i], mp.getOrDefault(nums[i], 0) + 1);
        }

        for(int i = 1; i <= len; i++) {

            int val = mp.getOrDefault(i, 0);

            if(val == 2) {
                repeatNum = i;
            }
        }

        sum = sum - repeatNum;

        return new int[]{repeatNum, (int)(actSum - sum)};
    }
}