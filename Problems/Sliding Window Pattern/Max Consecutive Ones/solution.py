from typing import List

class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        n = len(nums)
        max_len, st = 0, -1
        for i in range(n):
            if nums[i]:
                if st == -1:
                    st = i
                cur_len = i - st + 1
                if max_len < cur_len:
                    max_len = cur_len
            else:
                st = -1
        return max_len