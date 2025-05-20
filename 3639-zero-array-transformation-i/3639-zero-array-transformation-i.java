class Solution {

    public boolean isZeroArray(int[] nums, int[][] queries) {
        // [ 0 1 2 3 ]  indices
        // [ -1 -1 0 +1]  [ -1 -2 -2 -1]  prefix array
        // [ 4 3 2 1 ]  org array
        // [ 3 1 0 0 ] org + prefix 
        int n = nums.length;
        List<Integer> pre = new ArrayList<>(Collections.nCopies(n, 0));
        for (int[] ele : queries) {
            int l = ele[0];
            int r = ele[1];
            pre.set(l, pre.get(l) - 1);
            if ((r + 1 < n)) {
                pre.set(r + 1, pre.get(r + 1) + 1);
            }
        }
        for (int i = 1; i < n; i++) {
            pre.set(i, pre.get(i - 1) + pre.get(i));
        }
        boolean flag = true;
        for (int i = 0; i < n; i++) {
            if((nums[i] + pre.get(i)) > 0){
                flag = false;
                break;
            }
        }
        return flag;
    }
}
