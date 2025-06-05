
/*


*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string prefix = "";

        if(strs.size() == 0)
            return prefix;

        for(int i = 0; ; ++i)
        {
            if(strs[0].size() <= i)
                break;

            char temp = strs[0][i];
            bool isCommon = true;
            for(int j = 1; j < strs.size(); ++j)
            {
                if(strs[j].size() <= i || strs[j][i] != temp)
                {
                    isCommon = false;
                    break;
                }
            }

            if(!isCommon)
                break;
            else
                prefix += temp;
        }

        return prefix;
    }
};