from typing import List
class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        n = len(nums)
        res = []
        i = 0
        while i <= n-3:
            if nums[i] > 0:
                break
            if i >= 1 and nums[i] == nums[i-1]:
                i = i + 1
                continue
            target = -nums[i]
            st, end = i+1, n-1
            while st < end:
                if nums[st] + nums[end] == target:
                    res.append([nums[i], nums[st], nums[end]])
                    while st < end and nums[st] == nums[st+1]:
                        st = st + 1
                    while st < end and nums[end] == nums[end-1]:
                        end = end - 1
                    st = st + 1
                    end = end - 1
                elif nums[st] + nums[end] > target:
                    end = end - 1
                else:
                    st = st + 1
            i = i + 1
        return res
