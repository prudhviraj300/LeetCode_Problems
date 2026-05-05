class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int len = prices.size();
        int stock = prices[0], profit = 0;

        for(int i = 1; i < len; i++){
            if(prices[i] < stock){
                stock = prices[i];
            }
            profit = max(profit, prices[i] - stock);
        }

        return profit;

    }
};