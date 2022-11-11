Given two strings `s` and `t`, return `true` if they are equal when both are typed into empty text editors. `'#'` means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

(Question Link)[https://leetcode.com/problems/backspace-string-compare/]


Example 1:
```
Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".
```

Example 2:
```
Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".
```

