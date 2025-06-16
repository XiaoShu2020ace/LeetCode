
/**
    只有2~9有对应的字母，0、1和空格均不输出字符串

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> combinations;
        if (digits.empty()) {
            return combinations;
        }
        unordered_map<char, string> phoneMap{
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        string combination;

        backtrack(combinations, phoneMap, digits, 0, combination);

        return combinations;
    }

    void backtrack(vector<string>& combinations, const unordered_map<char, string>& phoneMap, const string& digits,
            int index, string& combination) {
        if (index == digits.length()) {
            combinations.push_back(combination);
        } else {
            char digit = digits[index];
            const string& letters = phoneMap.at(digit);

            for (const char& letter: letters) {
                combination.push_back(letter);
                backtrack(combinations, phoneMap, digits, index + 1, combination);
                combination.pop_back();
            }
        }
    }
};

*/

class Solution {
public:

std::vector<std::string> phone = {
    "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
};

    vector<string> letterCombinations(string digits) {
         if(digits.size() == 0)
            return {};

        vector<string> result;
        vector<string> combinations;

        for(int i = 0; i < digits.size(); ++i)
        {
            result.push_back(phone[atoi(digits.substr(i, 1).c_str())]);//转化所有字符串
        }

        for(int i = 0; i < result.size(); ++i)
        {
            for(int j = 0; j < result[i].size(); ++j)
            {
                if(i == 0)//插入所有情况
                {
                    combinations.push_back(result[i].substr(j, 1));
                }
                else
                {
                    for(int k = 0; k < combinations.size(); ++k)
                    {
                        if(combinations[k].size() == i)
                        {
                            combinations.push_back(combinations[k] + result[i].substr(j, 1));
                        }
                    }
                }
            }
        }

        for(int i = 0; i < combinations.size(); ++i)//剔除长度不适合的字符串
        {
            if(combinations[i].size() == digits.size())
            {
                combinations[i] = combinations[i];
            }
            else
            {
                combinations.erase(combinations.begin() + i);
                --i;
            }
        }

        return combinations;
    }
};