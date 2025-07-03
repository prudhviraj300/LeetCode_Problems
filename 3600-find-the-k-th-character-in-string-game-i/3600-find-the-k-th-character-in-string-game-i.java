class Solution {
    public char kthCharacter(int k) {
        String ans = "a", ref = "abcdefghijklmnopqrstuvwxyz";
        while(ans.length() < k){
            String cur = ans;
            for(char ch : ans.toCharArray()){
                cur += ref.charAt( ((ch - 'a') + 1) % 26);
            }
            ans = cur;
        }
        return ans.charAt(k - 1);
    }
}