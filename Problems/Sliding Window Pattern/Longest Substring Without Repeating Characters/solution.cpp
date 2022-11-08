class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int st = 0, max_len = 0;
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++){
            mp[s[i]]++;
            while(mp[s[i]] > 1){
                mp[s[st]]--;
                if(!mp[s[st]]) mp.erase(s[st]);
                st++;
            }
            int cur_len = i - st + 1;
            max_len = max(max_len, cur_len);
        }
        return max_len;

    }
};