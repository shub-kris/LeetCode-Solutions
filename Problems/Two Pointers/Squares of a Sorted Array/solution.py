from typing import List
class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        st, end = 0, len(nums) - 1
        k = len(nums) - 1
        squared = [0 for _ in range(end+1)]
        while(k != -1):
            if nums[st] * nums[st] < nums[end] * nums[end]:
                squared[k] = nums[end] * nums[end]
                end = end - 1
            else:
                squared[k] = nums[st] * nums[st]
                st = st + 1
            k = k - 1
        return squared
