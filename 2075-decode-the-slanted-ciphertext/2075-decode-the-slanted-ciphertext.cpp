class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        if(encodedText == ""){
            return "";
        }

        int cols = encodedText.length() / rows;

        vector<vector<char>> mat(rows, vector<char>(cols));

        int ind = 0;

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                mat[i][j] = encodedText[ind];
                ind++;
            }
        }

        encodedText = "";

        for(int i = 0; i < cols; i++){
            int r = 0, c = i;
            while(r < rows && c < cols){
                encodedText += mat[r][c];
                r++;
                c++;
            }
        }

        int len = encodedText.length();
        ind = 0;
        for(int i = len - 1; i >= 0; i--){
            if(encodedText[i] == ' '){
                ind++;
            }else{
                break;
            }
        }

        encodedText = encodedText.substr(0,len - ind);
        
        
        return encodedText;
    }
};