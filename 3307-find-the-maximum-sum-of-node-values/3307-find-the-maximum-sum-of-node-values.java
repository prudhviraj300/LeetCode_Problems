class Solution {
    public long maximumValueSum(int[] nums, int k, int[][] edges) {
        long total = 0, ans = 0, dis = Integer.MAX_VALUE;
        for(int i : nums){
            total += Math.max(i, i ^ k);
            if((i ^ k ) > i)   ans++;
            dis = Math.min(dis, Math.abs(i - (i ^ k)) );

        }
        return ans % 2 == 0? total : total - dis;
    }
}