class Solution {
    public int maxProfit(int[] prices) {
        int l = prices[0], max = 0;
        for(int i = 1; i < prices.length; i++){
            if(prices[i] < l){
                l = prices[i];
            }
            max = Math.max(max, prices[i] - l);
        }
        return max;
    }
}