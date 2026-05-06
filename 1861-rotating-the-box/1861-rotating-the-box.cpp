class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int rows = boxGrid.size();
        int cols = boxGrid[0].size();

        for(int i = 0; i < rows; i++){
            int st = 0;
            for(int j = 0; j < cols; j++){
                if(boxGrid[i][j] == '#'){
                    continue;
                }else if(boxGrid[i][j] == '.'){
                    swap(boxGrid[i][j], boxGrid[i][st]);
                    st++;
                }else if(boxGrid[i][j] == '*'){
                    if(j + 1 < cols){
                        st = j + 1;
                    }
                }
            }
        }
        vector<vector<char>> transpose(cols, vector<char>(rows));
        for(int i = 0; i < cols; i++){
            for(int j = 0; j < rows; j++){
                transpose[i][j] = boxGrid[rows - 1 - j][i];
            }
        }
        return transpose;
    }
};