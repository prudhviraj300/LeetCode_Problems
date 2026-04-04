class Solution {
    public String decodeCiphertext(String encodedText, int rows) {
        if(encodedText.equals("")){
            return "";
        }
        if(rows == 1){
            return encodedText;
        }

        int cols = encodedText.length() / rows;

        char[][] mat = new char[rows][cols];

        int idx = 0;

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                mat[i][j] = encodedText.charAt(idx);
                idx++;
            }
        }

        StringBuilder res = new StringBuilder();
        idx = 0;
        for(int i = 0; i < cols; i++){
            int r = 0, c = i;
            while(r < rows && c < cols){
                res.append(mat[r][c]);
                r++;
                c++;
            }
        }

        for(int i = res.length() - 1; i >=0; i--){
            if(res.charAt(i) == ' '){
                idx++;
            }else{
                break;
            }
        }


        return res.substring(0, res.length() - idx);
    }
}