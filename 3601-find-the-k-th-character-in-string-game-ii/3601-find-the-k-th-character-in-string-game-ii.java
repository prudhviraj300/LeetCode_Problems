class Solution {
    public char kthCharacter(long k, int[] operations) {
    long  ops = 0;
    while(k > 1){
        int p = (int)Math.ceil(Math.log(k)/Math.log(2));
        k -= Math.pow(2, p - 1);
        ops += operations[p - 1]; 
    }
    return (char)('a' + (ops % 26));
    }
}