class Solution {
public:
    vector<int> mp[26];

    int ceil_binary_search(vector<int> arr, int ele){
        int i = -1;
        int j = arr.size();

        while(j > i + 1){
            int mid = i + (j - i) / 2;
            
            if(arr[mid] > ele){
                j = mid;
            }else{
                i = mid;
            }
        }
        if(j == arr.size()){
            return -1;
        }

        return arr[j];
    }

    bool isSubsequence(string s, string t) {
        int len = t.length();

        for(int i = 0; i < len; i++){
            mp[t[i] - 'a'].push_back(i);
        }
        int prev = -1;

        for(char ch : s){
            vector<int> arr = mp[ch - 'a'];

            int i = ceil_binary_search(arr, prev);

            if(i == -1){
                return false;
            }
            prev = i;
        }

        return true;

    }
};