class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int i = 0;
        char carry = '0';
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        while(i < a.length() && i < b.length()){
            if(a[i] == '1' && b[i] == '1' && carry == '1'){
                ans += '1';
                carry = '1';
            }else if(a[i] == '1' && b[i] == '1' && carry == '0'){
                ans += '0';
                carry = '1';
            }else if(a[i] == '0' && b[i] == '0' && carry == '1'){
                ans += '1';
                carry = '0';
            }else if(a[i] == '0' && b[i] == '0' && carry == '0'){
                ans += '0';
                carry = '0';
            }else if((a[i] == '1' || b[i] == '1') && carry == '1'){
                ans += '0';
                carry = '1';
            }else if((a[i] == '1' || b[i] == '1') && carry == '0'){
                ans += '1';
                carry = '0';
            } 
            i++;
        }

        while(i < a.length()){
            if(a[i] == '1' && carry == '1'){
                ans += '0';
                carry = '1';
            }else if(a[i] == '1' && carry == '0'){
                ans += '1';
                carry = '0';
            }else if(a[i] == '0' && carry == '1'){
                ans += '1';
                carry = '0';
            }else if(a[i] == '0' && carry == '0'){
                ans += '0';
                carry = '0';
            }
            i++;
        }
        while(i < b.length()){
            if(b[i] == '1' && carry == '1'){
                ans += '0';
                carry = '1';
            }else if(b[i] == '1' && carry == '0'){
                ans += '1';
                carry = '0';
            }else if(b[i] == '0' && carry == '1'){
                ans += '1';
                carry = '0';
            }else if(b[i] == '0' && carry == '0'){
                ans += '0';
                carry = '0';
            }
            i++;
        }
        if(carry == '1')    ans += '1';
        reverse(ans.begin(), ans.end());

        return ans;
    }
};