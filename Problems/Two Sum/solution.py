from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict_sum = {}
        ans = []
        for idx, num in enumerate(nums):
            if (target - num) in dict_sum:
                ans = [idx, dict_sum[target-num]]
                break
            else:
                dict_sum[num] = idx
        return ans
