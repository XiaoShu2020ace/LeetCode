/*

    思路：删除与val相等的元素，
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(auto iter = nums.begin(); iter != nums.end(); )
        {
            if(*iter == val)
            {
                iter = nums.erase(iter); // 删除元素并返回下一个迭代器
            }
            else
            {
                ++iter; // 仅当不删除时才前进迭代器
            }
        }

        return nums.size(); // 返回剩余元素的数量
    }
};