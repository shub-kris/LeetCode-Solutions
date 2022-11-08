class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        n = len(s)
        st, max_len, max_count = 0, 0, 0
        count_uniq_chars = {}
        for i in range(n):
            count_uniq_chars[s[i]] = count_uniq_chars.get(s[i], 0) + 1
            if count_uniq_chars[s[i]] > max_count:
                max_count = count_uniq_chars[s[i]]
            # cur_len = i - st + 1
            while(i - st + 1 - max_count > k):
                count_uniq_chars[s[st]] = count_uniq_chars[s[st]] - 1
                st = st + 1
            cur_len = i - st + 1
            if cur_len > max_len:
                max_len = cur_len

        return max_len