class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        def back(string):
            stack = []
            for i, j in enumerate(string):
                if j != '#':
                    stack.append(j)
                else:
                    if stack:
                        stack.pop()
            return ''.join(stack)
        return back(s) == back(t)