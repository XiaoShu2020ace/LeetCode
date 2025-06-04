/**
  unordered_set<char> occ;

        int n = s.size();
        int rk = -1, ans = 0;

        for (int i = 0; i < n; ++i)
        {
            if (i != 0)
                occ.erase(s[i - 1]);//每一次循环先把重复的字符删除

            while (rk + 1 < n && !occ.count(s[rk + 1]))//通过计数判断是否存在重复
            {
                occ.insert(s[rk + 1]);
                ++rk;
            }

            ans = max(ans, rk - i + 1);
        }

        return ans;


        在 C++ 中，`unordered_set` 和 `set` 都是标准模板库（STL）中的容器，用于存储唯一的元素。尽管它们都用于存储唯一的元素，但它们在底层实现、性能、以及一些操作上有显著的区别。以下是 `unordered_set` 和 `set` 的主要区别：

1. **底层数据结构**：
   - `set` 基于红黑树实现，这是一种自平衡的二叉搜索树。
   - `unordered_set` 基于哈希表实现，使用哈希函数来快速定位元素。//****

2. **元素排序**：
   - `set` 会自动按照元素的比较函数（默认情况下是 `<` 操作符）对元素进行排序。
   - `unordered_set` 不保证元素的顺序，元素的存储位置由哈希函数决定。

3. **查找性能**：
   - `set` 的查找、插入和删除操作的时间复杂度通常是 \(O(\log n)\)，因为这些操作需要在树中进行。
   - `unordered_set` 的查找、插入和删除操作的平均时间复杂度是 \(O(1)\)，但在最坏情况下（例如，所有元素都映射到同一个哈希桶）可能退化到 \(O(n)\)。

4. **内存使用**：
   - `set` 通常比 `unordered_set` 使用更多的内存，因为它需要存储树结构。
   - `unordered_set` 通常使用较少的内存，因为它只需要存储哈希表。

5. **迭代器**：
   - `set` 提供的是双向迭代器，可以向前和向后遍历元素。
   - `unordered_set` 提供的是单向迭代器，只能向前遍历元素。

6. **元素唯一性**：
   - 两者都保证元素的唯一性，即容器中不会有重复的元素。

7. **哈希函数和比较函数**：
   - `set` 需要一个比较函数来确定元素的顺序。
   - `unordered_set` 需要一个哈希函数和一个比较函数（通常用于解决哈希冲突）。

8. **适用场景**：
   - 如果你需要快速查找并且不关心元素的顺序，`unordered_set` 是一个好选择。
   - 如果你需要有序的元素集合，或者需要使用范围查询（如 `lower_bound`、`upper_bound` 等），则应该使用 `set`。

总的来说，选择 `set` 还是 `unordered_set` 取决于你的具体需求，包括对元素顺序的要求、性能需求以及内存使用情况。

*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> occ;
        int n = s.length();
        int rk = -1, ans = 0;

        for (int i = 0; i < n; ++i)
        {
           if(i != 0)
               occ.erase(s[i - 1]);

           while(rk +1 < n && !occ.count(s[rk + 1]))
           {
               occ.insert(s[rk + 1]);
               ++rk;
           }

          ans = max(ans, rk - i + 1);
        }

        return ans;
    }
};