/*

    思路：给一个序列，让其组成一个整数，找到其重新排序组成的整数，比其大的最小整数，求出其序列，
        如果给的是最大，则返回最小的序列；

        从末尾开始，找到n-1与n个值进行比较，找到n>n-1的值，进行交换，如果找不到，倒序列输出；

    官方思路：
        1. 从后向前找到第一个升序对 (i, i+1)，即 nums[i] < nums[i + 1]。
        2. 如果不存在这样的 i，说明整个数组是降序的，直接反转整个数组。
        3. 如果存在这样的 i，找到从后向前第一个大于 nums[i] 的元素 j，交换 nums[i] 和 nums[j]。
        4. 最后将 i 之后的元素进行反转，使其成为最小的排列。
*/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 2;
        while (i >= 0 && nums[i] >= nums[i + 1]) {// 从后向前找到第一个升序对
            i--;
        }

        if (i >= 0) {
            int j = nums.size() - 1;
            while (j >= 0 && nums[i] >= nums[j]) {// 从后向前找到第一个大于 nums[i] 的元素
                j--;
            }

            swap(nums[i], nums[j]);
        }

        reverse(nums.begin() + i + 1, nums.end());// 将 i 之后的元素进行反转
    }
};