public class Solution {
    // you need treat n as an unsigned value
    public int reverseBits(int n) {
        int ans = 0;
        for(int i = 0; i < 32; i++){
            int temp = (n & 1);
            ans = ans << 1;
            ans |= temp;
            n = n >> 1;
        }
        return ans;
    }
}