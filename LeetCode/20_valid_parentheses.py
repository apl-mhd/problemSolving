class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) % 2 == 1:
            return False

        stack = []
        open_parenthesis = ['(', '{', '[']
        close_parenthesis = {'(': ')', '{': '}', '[': ']'}
        for i in s:
            if i in open_parenthesis:
                stack.append(i)
            if i == ')' or i == '}' or i == ']':
                if stack:
                    top = stack.pop()
                    if close_parenthesis[top] != i:
                        return False
                else:
                    return False

        if stack:
            return False
        return True