class Solution:
    def calc_sum_digits(self, n):
        str_num = str(n)
        sum_digits = 0
        for digit in str_num:
            num = int(digit)
            sum_digits = sum_digits + num * num
        return sum_digits

    def isHappy(self, n: int) -> bool:
        if n == 1:
            return True
        if n == 0:
            return False
        dict_sum = {}
        slow, fast = n, n
        while True:
            slow = self.calc_sum_digits(slow) if slow not in dict_sum else dict_sum[slow]
            fast = self.calc_sum_digits(self.calc_sum_digits(fast)) if fast not in dict_sum else self.calc_sum(dict_sum[fast])
            if slow == 1 or fast == 1:
                return True
            if slow == fast:
                return False
