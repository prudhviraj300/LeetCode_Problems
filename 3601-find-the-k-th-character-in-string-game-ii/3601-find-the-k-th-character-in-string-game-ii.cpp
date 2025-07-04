class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
      
        int noOfOps = 0;
        while(k > 1){
            int p = ceil(log2(k));
            k -= pow(2, p - 1);
            noOfOps += operations[p - 1];
        }        

        return (char)('a' + (noOfOps % 26));
    }
};