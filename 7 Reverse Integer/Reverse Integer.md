Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [−2^31,  2^31 − 1], then return 0.
给你一个 32 位的有符号整数 x ，返回将 x 中的数字部分反转后的结果。
如果反转后整数超过 32 位的有符号整数的范围 [−2^31,  2^31 − 1] ，就返回 0。


Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
假设环境不允许存储 64 位整数（有符号或无符号）。

Example 1:
    Input: x = 123
    Output: 321

Example 2:
    Input: x = -123
    Output: -321

Example 3:
    Input: x = 120
    Output: 21
 
Constraints:
    −2^31 <= x <= 2^31 − 1    