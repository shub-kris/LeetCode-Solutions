from typing import List

class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        n = len(nums)
        max_len, st, count_zero = 0, 0, 0
        for i in range(n):
            if not nums[i]:
                count_zero = count_zero + 1
            while(count_zero > k):
                if not nums[st]:
                    count_zero = count_zero - 1
                st = st + 1
            cur_len = i - st + 1
            if cur_len > max_len:
                max_len = cur_len
        return max_len
