class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int j = 0;
        int n = chars.size();

        while(i < n){
            char ch = chars[i];
            int cnt = 0;
            while(i < n && chars[i] == ch ){
                cnt++;
                i++;
            }
            chars[j] = ch;
            j++;
            if(cnt > 1){
            string s = to_string(cnt);
            for(char c : s){
                chars[j++] = c;
            }
            }

        }

        return j;


    }
};