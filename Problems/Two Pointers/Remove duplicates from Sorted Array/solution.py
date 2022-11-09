from typing import List

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        n = len(nums)
        k = 0
        for idx in range(1, n):
            if nums[idx] == nums[idx-1]:
                continue
            k = k + 1
            nums[k] = nums[idx]
        return k+1