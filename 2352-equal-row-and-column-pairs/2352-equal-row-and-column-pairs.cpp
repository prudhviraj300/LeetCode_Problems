class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        map<vector<int>, int> mp;

        for(int i = 0; i < n; i++){
            vector<int> temp;
            for(int j = 0; j < m; j++){
                temp.push_back(grid[i][j]);
            }
            mp[temp]++;
        }
        int ans = 0;

        for(int i = 0; i < n; i++){
            vector<int> temp;
            for(int j = 0; j < m; j++){
                temp.push_back(grid[j][i]);
            }
            if(mp.find(temp) != mp.end()){
                ans += mp[temp];
            }
        }

        return ans;
    }
};