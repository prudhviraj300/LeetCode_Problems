class Solution {
    public void setZeroes(int[][] matrix) {

        HashSet<Integer> rows = new HashSet<>(); // {1}
        HashSet<Integer> cols = new HashSet<>(); // {1}

        for(int i = 0; i < matrix.length; i++){
            for(int j = 0; j < matrix[0].length; j++){
                if(matrix[i][j] == 0){
                    if (!rows.contains(i))  rows.add(i);
                    if (!cols.contains(j))  cols.add(j);
                }
            }
        }

        for(int i = 0; i < matrix.length; i++){
            for(int j = 0; j < matrix[0].length; j++){
                // if i == contains || j == contains
                if( rows.contains(i) || cols.contains(j))
                    matrix[i][j] = 0;
                //set mat[i][j] = 0
            }
        }
    }
}