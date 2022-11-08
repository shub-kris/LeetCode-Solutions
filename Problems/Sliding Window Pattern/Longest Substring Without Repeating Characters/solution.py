class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n = len(s)
        max_len, st = 0, 0
        uniq_chars = {}
        for i in range(n):
            uniq_chars[s[i]] = uniq_chars.get(s[i], 0) + 1
            while uniq_chars[s[i]] > 1:
                uniq_chars[s[st]] = uniq_chars[s[st]] - 1;
                if uniq_chars[s[st]] == 0:
                    uniq_chars.pop(s[st])
                st = st + 1
            curr_len = i - st + 1
            if max_len < curr_len:
                max_len = curr_len
        return max_len
