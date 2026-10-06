class Solution:
    def missingNumber(self, nums: list[int]) -> int:
        sum,cnt = 0,0
        for i in nums:
            sum = sum + i
            cnt = cnt + 1
        return (int)((cnt * (cnt + 1)) / 2) - sum