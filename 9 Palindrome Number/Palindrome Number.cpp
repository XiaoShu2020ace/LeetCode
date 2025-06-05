
/*
    计算一个整数是否是回文数。
    可以转成字符串通过从首尾两端向中间比较数字来判断。


*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false; // 负数不是回文数

        if(x == 0)
            return true; // 0 是回文数

        std::string str = std::to_string(x);
        int iSize = str.size() - 1;
        for(int i = 0; i <= iSize / 2; ++i)
        {
            if(str[i] != str[iSize - i])
                return false; // 如果首尾字符不相等，则不是回文数
        }

        return true; // 如果所有字符都相等，则是回文数
    }
};