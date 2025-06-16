

/**
*   思路：
*
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        if (list1 == nullptr) {//先处理无效值
            return list2;
        } else if (list2 == nullptr) {
            return list1;
        } else if (list1->val < list2->val) {//递归，找最小的，小的返回再找其next
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        } else {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        auto iSize = lists.size();
        if(iSize == 0)
            return nullptr;
        else if(iSize == 1)
            return lists[0];
        else
        {
            auto ret = lists[0];

            for(int i = 1; i < iSize; ++i)
            {
                ret = mergeTwoLists(ret, lists[i]);
            }

            return ret;
        }
    }
};