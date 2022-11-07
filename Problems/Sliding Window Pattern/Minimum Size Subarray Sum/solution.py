from typing import List
class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        n = len(nums)
        curr_sum = 0
        total_sum = sum(nums[:n])
        if target > total_sum:
            return 0
        k = 0
        min_len = n
        for i in range(n):
            curr_sum += nums[i]
            while(curr_sum >= target):
                curr_len = i-k+1
                if min_len > curr_len:
                    min_len = curr_len
                curr_sum -= nums[k]
                k = k+1

        return min_len