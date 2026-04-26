class Solution {
public:
    bool dfs(int i, int j, int pi, int pj, vector<vector<int> > &isVisited, vector<vector<char>> &grid, int r, int c){
        isVisited[i][j] = 1;

        if( (i-1 >= 0) && grid[i-1][j] == grid[i][j] ){
            if(isVisited[i-1][j] == 0){
                if(dfs(i-1, j, i, j, isVisited, grid, r, c)){
                    return true;
                }
            }else if( (pi != i-1) || (pj != j) ){
                return true;
            }
        }

        if( (j+1 < c) && grid[i][j+1] == grid[i][j] ){
            if(isVisited[i][j+1] == 0){
                if(dfs(i, j+1, i, j, isVisited, grid, r, c)){
                    return true;
                }
            }else if( (pi != i) || (pj != j + 1)){
                return true;
            }
        }

        if( (j-1 >= 0 ) && grid[i][j-1] == grid[i][j] ){
            if(isVisited[i][j-1] == 0){
                if(dfs(i, j-1, i, j, isVisited, grid, r, c)){
                    return true;
                }
            }else if( (pi != i) || (pj != j-1)){
                return true;
            }
        }

        if( (i+1 < r) && grid[i+1][j] == grid[i][j] ){
            if(isVisited[i+1][j] == 0){
                if(dfs(i+1, j, i, j, isVisited, grid, r, c)){
                    return true;
                }
            }else if( (pi != i+1) || (pj != j)) {
                return true;
            }
        }

        return false;
    }
    bool containsCycle(vector<vector<char>>& grid) {
        int r = grid.size();
        int c = grid[0].size();

        vector<vector <int>> isVisited(r, vector<int>(c, 0));

        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(isVisited[i][j] == 0){
                    bool res = dfs(i, j, -1, -1, isVisited, grid, r, c);
                    if(res){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};