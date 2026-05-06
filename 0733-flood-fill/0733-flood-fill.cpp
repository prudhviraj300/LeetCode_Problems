class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc,int original, int color,int rows,int cols){
        
        image[sr][sc] = color;

        if(sr + 1 < rows && original == image[sr + 1][sc]){
            dfs(image, sr + 1, sc, original, color, rows, cols);
        }
        if(sr - 1 >= 0 && image[sr -1][sc] == original){
            dfs(image, sr - 1, sc, original, color, rows, cols);
        }
        if(sc + 1 < cols && original == image[sr][sc + 1]){
            dfs(image, sr, sc + 1, original, color, rows, cols);
        }
        if(sc - 1 >= 0 && original == image[sr][sc - 1]){
            dfs(image, sr, sc - 1, original, color, rows, cols);
        }


    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int rows = image.size();
        int cols = image[0].size();

        if(image[sr][sc] == color){
            return image;
        }
        
        dfs(image, sr, sc,image[sr][sc], color, rows, cols);

        return image;
    }
};