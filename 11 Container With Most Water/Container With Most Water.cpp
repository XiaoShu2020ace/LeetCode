
/*
    输入一个整数数组，遍历计算其任意两个数值之间的间隔与最小的数值的乘法得到的最大值是多少

    1 2 3 5
        间隔 * min
    1~2 1*1
    1~3 2*1
    1~5 3*1
    2~3 1*2
    2~5 2*2    **max
    3~5 1*3


        int l = 0, r = height.size() - 1;
        int ans = 0;
        while (l < r) {
            int area = min(height[l], height[r]) * (r - l);
            ans = max(ans, area);
            if (height[l] <= height[r]) {
                ++l;
            }
            else {
                --r;
            }
        }
        return ans;
*/


class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int iSize = height.size();

        for(int i = 0, j = iSize - 1;  j > i;)//如果是两重循环，有些时候耗时会过长
        {
            auto areaTemp = (j-i) * std::min(height[i], height[j]);//面积
            if(areaTemp > maxArea)
                maxArea = areaTemp;

            if(height[i] > height[j])//
                --j;
            else
                ++i;
        }

        return maxArea;
    }
};