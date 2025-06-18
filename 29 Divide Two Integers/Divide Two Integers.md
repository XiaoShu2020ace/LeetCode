Given two integers dividend and divisor, divide two integers without using multiplication, 
division, and mod operator.
3
The integer division should truncate toward zero, which means losing its fractional part. 
For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.

Return the quotient after dividing dividend by divisor.

Note: Assume we are dealing with an environment that could only store integers 
within the 32-bit signed integer range: [−2^31, 2^31-1]. For this problem, 
if the quotient is strictly greater than 2^31-1, then return 2^31-1, 
and if the quotient is strictly less than -2^31, then return -2^31.

给你两个整数，被除数 dividend 和除数 divisor。将两数相除，要求 不使用 乘法、除法和取余运算。
整数除法应该向零截断，也就是截去（truncate）其小数部分。例如，8.345 将被截断为 8 ，-2.7335 将被截断至 -2 。
返回被除数 dividend 除以除数 divisor 得到的 商 。

注意：假设我们的环境只能存储 32 位 有符号整数，其数值范围是 [−2^31,  2^31−1] 。
本题中，如果商 严格大于 2^31−1 ，则返回 2^31−1；
如果商 严格小于 -2^31 ，则返回 -2^31 。

Example 1:
    Input: dividend = 10, divisor = 3
    Output: 3
    Explanation: 10/3 = 3.33333.. which is truncated to 3.

Example 2:
    Input: dividend = 7, divisor = -3
    Output: -2
    Explanation: 7/-3 = -2.33333.. which is truncated to -2.
 
Constraints:
    -2^31 <= dividend, divisor <= 2^31-1
    divisor != 0

