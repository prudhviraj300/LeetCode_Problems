class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int rows = mat.size();
        int cols = mat[0].size();
        k = k % cols;

        vector<int> arr(cols);

        for(int i = 0; i < rows; i++){
            if(i&1){
                for(int j = 0; j < cols; j++){
                    arr[(j + k) % cols] = mat[i][j];
                }
            }else{
                for(int j = 0; j < cols; j++){
                    arr[(j - k + cols) % cols] = mat[i][j];
                }
            }

            for(int j = 0; j < cols; j++ ){
                if(arr[j] != mat[i][j]) return false;
            }            
        }

        return true;

    }
};