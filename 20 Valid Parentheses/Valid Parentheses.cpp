/**

    给定一个字符串，只有{[()]}六个符号, 判断括号是否有效。
    即是否一一对应，且括号的顺序是否正确。

    必须先是左括号


    ([)]

class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if (n % 2 == 1) {
            return false;
        }

        unordered_map<char, char> pairs = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        stack<char> stk;
        for (char ch: s) {
            if (pairs.count(ch)) {
                if (stk.empty() || stk.top() != pairs[ch]) {
                    return false;
                }
                stk.pop();
            }
            else {
                stk.push(ch);
            }
        }
        return stk.empty();
    }
};

*/

class Solution {
public:
    bool isValid(string s) {
        if ( s.size() % 2 != 0)
            return false;

        unordered_map<char, char> pairs = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        stack<char> stk;
        for (char ch: s)
        {
            if (pairs.count(ch))// 如果是右括号，则栈内最上面的必须是对应的左括号才正常
            {
                if (stk.empty() || stk.top() != pairs[ch])
                    return false;

                stk.pop();
            }
            else {
                stk.push(ch);
            }
        }

        return stk.empty();
    }
};