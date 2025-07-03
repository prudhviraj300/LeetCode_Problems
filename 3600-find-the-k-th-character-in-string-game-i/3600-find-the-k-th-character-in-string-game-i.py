class Solution:
    def kthCharacter(self, k: int) -> str:
        ans = "a"
        ref = "abcdefghijklmnopqrstuvwxyz"

        while(len(ans) < k ):
            cur = ans
            for i in ans:
                cur = cur + ref[((ord(i) - ord('a')) + 1) % 26]
            ans = cur
        
        return ans[k - 1]