class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        unordered_set<int> s;
        int tot = 0;
        for(int i : nums){
            s.insert(i);
            tot++;
        }
        for(int i = 1; i <= tot; i++){
            if(s.count(i)){
                continue;
            }
            res.push_back(i);
        }

        return res;
    }
};