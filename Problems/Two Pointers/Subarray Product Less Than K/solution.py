from typing import List

class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        n = len(nums)
        prod = 1
        count = 0
        st = 0
        for i in range(n):
            prod = prod * nums[i]
            while prod >= k and st <= i:
                    prod = prod // nums[st]
                    st = st + 1
            count = count + (i - st) + 1


        return count