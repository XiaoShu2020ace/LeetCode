/*

    可以仿照之前的思路，通过字符串查找其对应的数值，然后逐渐缩短字符串来计算最后的值



*/

std::vector<std::string> thousands = {"", "M", "MM", "MMM"};
std::vector<std::string> hundreds = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
std::vector<std::string> tens = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
std::vector<std::string> ones = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

class Solution {
public:

    int GetNum(std::string s, std::vector<std::string>& arr)
    {
        int ret = 0;
        int lengthMax = 0;
         for(int i = arr.size() - 1; i >= 0; --i)
        {
            if(s.find(arr[i]) != std::string::npos)
            {
                if(arr[i].length() > lengthMax)//特殊处理
                {
                    lengthMax = arr[i].length();
                    ret = i;
                }
            }
        }

        return ret;
    }


    int romanToInt(string s) {
        int result = 0;
        int tempInt = 0;

        std::string tempS = s;
        tempInt = GetNum(tempS, ones);
        result += tempInt;

        tempS = tempS.substr(0, tempS.size() - ones[tempInt].size());
        tempInt = GetNum(tempS, tens);
        result += tempInt * 10;

        tempS = tempS.substr(0, tempS.size() - tens[tempInt].size());
        tempInt = GetNum(tempS, hundreds);
        result += tempInt * 100;

        tempS = tempS.substr(0, tempS.size() - hundreds[tempInt].size());
        tempInt = GetNum(tempS, thousands);
        result += tempInt * 1000;

        return result;
    }
};