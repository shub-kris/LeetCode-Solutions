class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        unordered_map<char, int> mp;
        int st = 0, max_len = 0, max_count = 0;
        for(int i = 0; i < n; i++){
            mp[s[i]]++;
            max_count = max(max_count, mp[s[i]]);
            while(i - st + 1 - max_count > k)
                mp[s[st++]]--;
            max_len = max(max_len, i - st + 1);
        }
        return max_len;
    }
};