class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = INT_MIN;

        int rows = accounts.size();
        int cols = accounts[0].size();

        for(int i = 0; i < rows; i++){
            int curWealth = 0;
            for(int j = 0; j < cols; j++){
                curWealth += accounts[i][j];
            }
            maxWealth = max(maxWealth, curWealth);
        }

        return maxWealth;
    }

};