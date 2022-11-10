from typing import List
class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        n = len(nums)
        nums.sort()
        closest_diff = 500001
        for i in range(n-2):
            st, end = i+1, n-1
            while st < end:
                triplet_sum = nums[st] + nums[end] + nums[i]
                if triplet_sum == target:
                    return target
                elif triplet_sum  < target:
                    st = st + 1
                else:
                    end = end - 1
                if abs(target-triplet_sum) < abs(closest_diff):
                    closest_diff = target-triplet_sum
        return target - closest_diff



