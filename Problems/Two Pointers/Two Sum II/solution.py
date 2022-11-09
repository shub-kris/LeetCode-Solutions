from typing import List
class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        st, end = 0, len(numbers) - 1
        while st < end:
            cur_sum = numbers[st] + numbers[end]
            if cur_sum == target:
                return [st+1, end+1]
            elif cur_sum > target:
                end = end - 1
            else:
                st = st + 1
