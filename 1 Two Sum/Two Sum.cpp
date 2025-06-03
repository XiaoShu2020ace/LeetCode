class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int iSize = nums.size();
        for(int i = 0; i < iSize; ++i)
        {
            for(int j = i + 1; j < iSize; ++j)
            {
                if(nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }

        return {};
    }
};