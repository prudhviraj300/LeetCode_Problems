class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> frequencyArray(101,0);

        for(int i : nums){
            frequencyArray[i]++;
        }

        int goodPairs = 0;

        for(int i = 0; i < 101; i++){
            if(frequencyArray[i] > 1){
                goodPairs += ((frequencyArray[i] * (frequencyArray[i] - 1)) / 2);
            }
        }
        return goodPairs;
    }
};