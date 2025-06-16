/*
    思路：
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int needleSize = needle.size();
        int haystackSize = haystack.size();

        if(needleSize > haystackSize)//
            return -1;

        for(int i = 0; i < haystack.size() - needleSize + 1; ++i)
        {
            if(haystack.substr(i, needleSize) == needle)
                return i;
        }

        return -1;
    }
};