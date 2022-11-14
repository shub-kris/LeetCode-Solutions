from typing import List

class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        n = len(nums)
        st, end = 0, n-1
        while st < n-1:
            if nums[st] > nums[st+1]:
                break
            st = st+1
        if st == n-1:  #It means that input array is already sorted
            return 0

        while end > 0:
            if nums[end] < nums[end-1]:
                break
            end = end - 1

        maxi, mini = nums[st], nums[st]
        for idx in range(st+1, end+1):
            if nums[idx] > maxi:
                maxi = nums[idx]
            if nums[idx] < mini:
                mini = nums[idx]

        for idx in range(st):
            if nums[idx] > mini:
                st = idx
                break

        for idx in range(n-1, end, -1):
            if nums[idx] < maxi:
                end = idx
                break
        return end - st + 1