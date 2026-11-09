class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = size(candies);
        vector<bool> res;
        int mx = 0;
        for(int i = 0; i < n; i++){
            mx = max(mx, candies[i]);
        }

        for(int i = 0; i < n; i++){
            if(candies[i] + extraCandies < mx){
                res.push_back(false);
            }else{
                res.push_back(true);
            }
        }

        return res;
    }
};