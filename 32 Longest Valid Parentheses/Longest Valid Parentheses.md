Given a string containing just the characters '(' and ')', 
return the length of the longest valid (well-formed) parentheses substring.
给你一个只包含 '(' 和 ')' 的字符串，找出最长有效（格式正确且连续）括号子串的长度。

Example 1:
    Input: s = "(()"
    Output: 2
    Explanation: The longest valid parentheses substring is "()".

Example 2:
    Input: s = ")()())"
    Output: 4
    Explanation: The longest valid parentheses substring is "()()".

Example 3:
    Input: s = ""
    Output: 0

Constraints:
    0 <= s.length <= 3 * 104
    s[i] is '(', or ')'.

提示：
    0 <= s.length <= 3 * 104
    s[i] 为 '(' 或 ')'
