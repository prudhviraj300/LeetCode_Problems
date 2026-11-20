class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        vector<int> inc(n);
        vector<int> dec(n);
        inc[0] = 1;
        dec[n - 1] = 1;
        for(int i = 1; i < n - 1; i++){
            if(arr[i] > arr[i - 1]){
                inc[i] = inc[i - 1] + 1;
            }else{
                inc[i] = 1;
            }

            if(arr[n - (i + 1)] > arr[n - i]){
                dec[n - (i + 1)] = dec[n - i] + 1;
            }else{
                dec[n - (i + 1)] = 1;
            }
        }
        int ans = 0;

        for(int i = 0; i < n; i++){
            if(inc[i] > 1 && dec[i] > 1){
                ans = max(ans, inc[i] + dec[i] - 1);
            }
        }

        return ans;
    }
};