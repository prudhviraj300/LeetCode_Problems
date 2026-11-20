class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> freq(2001, 0);

        for(int i : arr){
            freq[i + 1000]++;
        }
        sort(freq.begin(), freq.end());

        for(int i = 0; i < 2000; i++){
            if(freq[i] == 0){
                continue;
            }
            if(freq[i] == freq[i + 1]){
                return 0;
            }
        }
        
        return 1;
    }
};