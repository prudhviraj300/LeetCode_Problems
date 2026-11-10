class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        vector<string> arr;
        string word = "";
        for(int i = 0; i < n; i++){
            if(s[i] == ' '){
                if(word != ""){
                    arr.push_back(word);
                }
            word = "";
            }else{
                word += s[i];
            }
        }
        if(word != "")
            arr.push_back(word);
        reverse(arr.begin(), arr.end());
        string ans = "";
        for(int i = 0; i < arr.size() - 1; i++){
            ans += arr[i];
            ans += ' ';
        }
        ans += arr.back();


        return ans;

    }
};