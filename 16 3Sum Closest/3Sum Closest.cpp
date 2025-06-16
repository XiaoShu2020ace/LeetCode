
/**

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int best = 1e7;

        // 根据差值的绝对值来更新答案
        auto update = [&](int cur) {
            if (abs(cur - target) < abs(best - target)) {
                best = cur;
            }
        };

        // 枚举 a
        for (int i = 0; i < n; ++i) {
            // 保证和上一次枚举的元素不相等
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            // 使用双指针枚举 b 和 c
            int j = i + 1, k = n - 1;
            while (j < k) {

                int sum = nums[i] + nums[j] + nums[k];
                // 如果和为 target 直接返回答案
                if (sum == target) {
                    return target;
                }

                update(sum);

                if (sum > target) {

                    int k0 = k - 1;// 如果和大于 target，移动 c 对应的指针
                    while (j < k0 && nums[k0] == nums[k]) {// 移动到下一个不相等的元素
                        --k0;
                    }
                    k = k0;
                } else {

                    int j0 = j + 1;   // 如果和小于 target，移动 b 对应的指针
                    while (j0 < k && nums[j0] == nums[j]) {// 移动到下一个不相等的元素
                        ++j0;
                    }

                    j = j0;
                }
            }
        }
        return best;
    }
};

*/


class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        auto tempNums = nums;

        std::sort(tempNums.begin(), tempNums.end());
        int iSize = tempNums.size();
        int closestSum = 1e7;//不能用INT_MAX，后续可能会溢出

        for (int i = 0; i < iSize - 2; ++i)
        {
            if (i > 0 && tempNums[i] == tempNums[i - 1]) {//重复的值跳过处理
                continue;
            }

             int j = i + 1, k = iSize - 1;//双指针
             while(j < k)
             {
                int tempNum = tempNums[i] + tempNums[j] + tempNums[k];
                if (tempNum == target) {
                    return target; // 找到等于目标值的和，直接返回
                }

                if(abs(tempNum - target) < abs(closestSum - target)) {
                    closestSum = tempNum; // 更新最接近的和
                }

                if(tempNum > target)
                {
                    --k;
                    while(j < k && tempNums[k] == tempNums[k + 1]) { // 跳过重复的值
                        --k;
                    }
                }
                else
                {
                    ++j;
                    while(j < k && tempNums[j] == tempNums[j - 1]) { // 跳过重复的值
                        ++j;
                    }
                }
             }
        }

        return closestSum;
    }
};