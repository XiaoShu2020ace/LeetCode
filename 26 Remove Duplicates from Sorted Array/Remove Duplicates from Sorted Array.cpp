
/*
    思路：因为是完全递增的，可以直接循环，遇见不同则+1，遇见系统continue

*/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ret = 0;
        int temp = -10001;
        vector<int> vRet;

        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] == temp)
                continue;
            else
            {
                temp = nums[i];
                ++ret;
                vRet.push_back(temp);
            }
        }

        nums = vRet;//返回

        return ret;
    }
};