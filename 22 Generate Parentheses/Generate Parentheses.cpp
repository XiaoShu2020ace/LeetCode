
/*
    给一个整数1~8，生成n对小括号组成的字符串，需要注意小括号要配对

    思路：递归-拆分问题，实现某个整数n对应的必须首尾是配对的小括号，那么传入n，可以确定两个首尾是（和）
        但是其他部分可以分成两部分，一部分在左括号的右侧和右括号的左侧，另外一部分是右括号的右侧，且两部分也是符合规则的，
           这样整体就是符合规则的；

class Solution {
    shared_ptr<vector<string>> cache[100] = {nullptr};

public:
    shared_ptr<vector<string>> generate(int n) {
        if (cache[n] != nullptr)
            return cache[n];

        if (n == 0)
        {
            cache[0] = shared_ptr<vector<string>>(new vector<string>{""});
        } else
        {
            auto result = shared_ptr<vector<string>>(new vector<string>);

            for (int i = 0; i != n; ++i)
            {
                auto lefts = generate(i);
                auto rights = generate(n - i - 1);

                for (const string& left : *lefts)
                    for (const string& right : *rights)
                        result -> push_back("(" + left + ")" + right);
            }
            cache[n] = result;
        }
        return cache[n];
    }

    vector<string> generateParenthesis(int n) {
        return *generate(n);
    }
};

*/

class Solution {
public:
   vector<string> generate(const int& n)
    {
        if(n == 0)
            return {""};

        vector<string> result;
        for(int i = 0; i < n; ++i)
        {
            auto lefts = generate(i);
            auto rights = generate(n - i - 1);

            for(const string& left : lefts)
                for(const string& right : rights)
                    result.emplace_back("(" + left + ")" + right);
        }

        return result;
    }

    vector<string> generateParenthesis(int n) {
        return generate(n);
    }
};