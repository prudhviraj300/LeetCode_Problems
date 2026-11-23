class Solution {
public:
    string decodeString(string s) {
        string ans = "";
        stack<string> st;
        stack<int> n;
        int num = 0;
        for(char ch : s){
            if(isdigit(ch)){
                num = num * 10 + (ch - '0');
            }else if(ch == '['){
                n.push(num);
                st.push(ans);
                ans = "";
                num = 0;
            }else if(ch == ']'){
                int times = n.top();
                n.pop();
                string cur = st.top();
                st.pop();
                for(int i = 0; i < times; i++){
                    cur += ans;
                }
                ans = cur;
            }else{
                ans += ch;
            }
        }

        return ans;
    }
};