Given a string containing digits from 2-9 inclusive, 
return all possible letter combinations that the number could represent.
Return the answer in any order.

给定一个仅包含数字 2-9 的字符串，返回所有它能表示的字母组合。答案可以按 任意顺序 返回。
给出数字到字母的映射如下（与电话按键相同）。注意 1 不对应任何字母。


A mapping of digits to letters (just like on the telephone buttons) is given below. 
Note that 1 does not map to any letters.

![img.png](img.png)


Example 1:
    Input: digits = "23"
    Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

Example 2:
    Input: digits = ""
    Output: []

Example 3:
    Input: digits = "2"
    Output: ["a","b","c"]

Constraints:
    0 <= digits.length <= 4
    digits[i] is a digit in the range ['2', '9'].
提示：
    0 <= digits.length <= 4
    digits[i] 是范围 ['2', '9'] 的一个数字。