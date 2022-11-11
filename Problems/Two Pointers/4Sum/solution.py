from typing import List
class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        n = len(nums)
        ans = []
        nums.sort()
        i = 0
        while i < n-3:
            j = i+1
            while j < n-2:
                st, end = j+1, n-1
                while st < end:
                    cur_sum = nums[i]+nums[j]+nums[st]+nums[end]
                    if cur_sum == target:
                        ans.append([nums[i], nums[j], nums[st], nums[end]])
                        while st < end and nums[st] == nums[st+1]:
                            st = st + 1
                        while st < end and nums[end] == nums[end-1]:
                            end = end - 1
                        st, end = st + 1, end - 1
                    elif cur_sum < target:
                        st = st + 1
                    else:
                        end = end - 1
                while j < n-2 and nums[j] == nums[j+1]:
                    j = j+1
                j = j+1
            while i < n-3 and nums[i] == nums[i+1]:
                i = i+1
            i = i+1
        return ans
