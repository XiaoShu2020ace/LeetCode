
/**
class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length(), r = numRows;
        if (r == 1 || r >= n) {
            return s;
        }
        vector<string> mat(r);
        for (int i = 0, x = 0, t = r * 2 - 2; i < n; ++i) {
            mat[x] += s[i];
            i % t < r - 1 ? ++x : --x;
        }
        string ans;
        for (auto &row : mat) {
            ans += row;
        }
        return ans;
    }
};
**/

//输入一个字符串和行数，按照z字形排列输出字符串，按列排序然后按行输出，
class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length(), r = numRows;
        if (r == 1 || r >= n) {
            return s;//一行或者一列的情况，直接返回
        }

        vector<string> mat(r);//每行是一个字符串
        for (int i = 0, x = 0, t = r * 2 - 2; i < n; ++i)
        {
            mat[x] += s[i];

            i % t < r - 1 ? ++x : --x;//计算i位置的字符在对应的哪一行
        }

        string ans;
        for (auto &row : mat) {
            ans += row;
        }

        return ans;
    }
};