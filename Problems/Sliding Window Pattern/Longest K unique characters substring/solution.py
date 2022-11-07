class Solution:

    def longestKSubstr(self, s, k):
        # code here
        n = len(s)
        window_start, max_len = 0, 0
        uniq_char_count = {}
        for i in range(n):
            uniq_char_count[s[i]] = uniq_char_count.get(s[i], 0) + 1
            while len(uniq_char_count) > k:
                uniq_char_count[s[window_start]] = uniq_char_count.get(s[window_start]) - 1
                if uniq_char_count[s[window_start]] == 0:
                    uniq_char_count.pop(s[window_start])
                window_start = window_start + 1
            cur_len = i - window_start + 1
            if len(uniq_char_count) == k and max_len < cur_len:
                max_len = cur_len
        return max_len if max_len != 0 else -1