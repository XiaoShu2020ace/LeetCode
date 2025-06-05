
/*
class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0)
        {
            if (rev < INT_MIN / 10 || rev > INT_MAX / 10)//先判断是否会溢出
                return 0;

            int digit = x % 10;
            x /= 10;
            rev = rev * 10 + digit;
        }
        return rev;
    }
};

*/

class Solution {
public:
    int reverse(int x) {
        int temp = x;
        int ret = 0;
        for(; temp != 0; temp /= 10)
        {
            if (ret > INT_MAX / 10 || ret < INT_MIN / 10)
                return 0; // Handle overflow

            int tempValue = temp % 10;
            if(tempValue == 0 && ret == 0)//原始字符串末尾是0时；
                continue;

            ret = ret * 10 + tempValue;//将末尾的数字添加到结果中
        }

        return ret;
    }
};