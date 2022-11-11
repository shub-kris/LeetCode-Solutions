class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.length(), m = t.length();
        int ls = 0, lt = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '#' && ls > 0) ls--;
            else if(s[i] != '#') s[ls++] = s[i];
        }

        for(int j = 0; j < m; j++){
            if(t[j] == '#' && lt > 0) lt--;
            else if(t[j] != '#') t[lt++] = t[j];
            cout << lt << endl;
        }
        if(ls != lt) return false;
        int i = 0, j = 0;
        while(i < ls && j < lt) if(s[i++] != t[j++]) return false;
        return true;

    }
};