
/**
    输入字符串，输出第一个字母之前的数值；
    如果的一个字符就是字母，则返回0，空格不做处理
    符号只能有一个，且只能在数字之前；



*/

class Solution {
public:
    int myAtoi(string s) {
        int ret = 0;
        bool isNegative = false;// To track if the number is negative
        bool hasSign = false; // To track if a sign has been encountered
        bool hasNumber = false; // To track if any number has been encountered

        for(int i = 0; i < s.length(); ++i)
        {
             if(s[i] == ' ') // Skip leading spaces
                 continue;

             if(s[i] == '+' || s[i] == '-')
             {
                 if(hasSign || hasNumber)
                    break;
                 else
                 {
                     hasSign = true;
                     isNegative = (s[i] == '-');
                     continue;
                 }
             }

             if(s[i] < '0' || s[i] > '9') // If the character is not a digit
                 break;

             auto digit = s[i] - '0'; // Convert character to digit
             if(ret > (INT_MAX - digit) / 10) // Check for overflow
                return isNegative ? INT_MIN : INT_MAX;

             ret = ret * 10 + digit; // Build the number

             hasNumber = true;
        }

        if(isNegative)
            ret = -1 * ret;

        return ret;
    }
};