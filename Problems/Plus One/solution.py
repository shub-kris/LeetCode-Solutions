from typing import List

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        ans = []
        carry = 1
        n = len(digits)
        for idx in range(n-1, -1, -1):
            sum = digits[idx] + carry
            carry = sum // 10
            ans.append(sum % 10)

        if carry:
            ans.append(carry)
        ans.reverse()
        return ans