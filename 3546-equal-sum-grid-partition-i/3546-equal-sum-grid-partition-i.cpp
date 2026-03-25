class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        long long R_Sum = 0, C_Sum = 0;
        long long Total_Sum = 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                Total_Sum += grid[i][j];
            }
        }

        if(Total_Sum & 1)   return 0;

        for(int i = 0; R_Sum < (Total_Sum / 2) && i < m; i++){
            for(int j = 0; j < n; j++){
                R_Sum += grid[i][j];
            }
        }
        if(R_Sum == (Total_Sum / 2))    return true;

        for(int j = 0; C_Sum < (Total_Sum / 2) && j < n; j++){
            for(int i = 0; i < m; i++){
                C_Sum += grid[i][j];
            }
        }

        return C_Sum == (Total_Sum / 2);
    }
};