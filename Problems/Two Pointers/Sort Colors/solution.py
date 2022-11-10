from typing import List

# Solution 1

class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        st, mid, end = 0, 0, n-1
        while mid <= end:
            if not nums[mid]:
                nums[st], nums[mid] = nums[mid], nums[st]
                st = st + 1
                mid = mid + 1
            elif nums[mid] == 1:
                mid = mid + 1
            else:
                nums[mid], nums[end] = nums[end], nums[mid]
                end = end - 1





# Solution 2
class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        count0, count1, count2 = 0,0,0
        for num in nums:
            if not num:
                count0 = count0 + 1
            elif num == 1:
                count1 = count1 + 1
            else:
                count2 = count2 + 1
        k = 0
        while count0:
            nums[k] = 0
            count0 = count0 - 1
            k = k + 1
        while count1:
            nums[k] = 1
            count1 = count1 - 1
            k = k + 1

        while count2:
            nums[k] = 2
            count2 = count2 - 1
            k = k + 1
        return nums