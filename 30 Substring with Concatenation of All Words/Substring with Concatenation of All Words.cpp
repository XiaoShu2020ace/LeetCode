/*
    思路：根据所有单词组成各种字符串，然后在s中查找这些字符串的起始位置。

class Solution {
public:
    vector<int> findSubstring(string &s, vector<string> &words) {

        vector<int> res;
        int m = words.size(), n = words[0].size(), ls = s.size();//因为words内所有单词长度相同
        for (int i = 0; i < n && i + m * n <= ls; ++i) {
            unordered_map<string, int> differ;

            for (int j = 0; j < m; ++j) {
                ++differ[s.substr(i + j * n, n)];//统计s字符串内，每个单词出现的次数，由限制条件可知
            }

            for (string &word: words) {
                if (--differ[word] == 0) {
                    differ.erase(word);//如果某个单词出现次数为0，则从map中删除
                }
            }

            for (int start = i; start < ls - m * n + 1; start += n) {
                if (start != i) {
                    string word = s.substr(start + (m - 1) * n, n);
                    if (++differ[word] == 0) {
                        differ.erase(word);
                    }
                    word = s.substr(start - n, n);
                    if (--differ[word] == 0) {
                        differ.erase(word);
                    }
                }
                if (differ.empty()) {
                    res.emplace_back(start);
                }
            }
        }
        return res;

    }
};

*/


class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        int m = words.size(), n = words[0].size(), ls = s.size();//因为words内所有单词长度相同
        for (int i = 0; i < n && i + m * n <= ls; ++i) {
            unordered_map<string, int> differ;

            for (int j = 0; j < m; ++j) {
                ++differ[s.substr(i + j * n, n)];//统计s字符串内，每个单词出现的次数，由限制条件可知
            }

            for (string &word: words) {
                if (--differ[word] == 0) {
                    differ.erase(word);//如果某个单词出现次数为0，则从map中删除
                }
            }

            for (int start = i; start < ls - m * n + 1; start += n) {
                if (start != i) {
                    string word = s.substr(start + (m - 1) * n, n);
                    if (++differ[word] == 0) {
                        differ.erase(word);
                    }

                    word = s.substr(start - n, n);
                    if (--differ[word] == 0) {
                        differ.erase(word);
                    }
                }

                if (differ.empty()) {
                    res.emplace_back(start);
                }
            }
        }
        return res;
    }
};