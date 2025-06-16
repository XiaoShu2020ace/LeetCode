/*


 ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* current = dummy;

        // 遍历链表，每次处理两个节点
        while (current->next && current->next->next) {
            ListNode* first = current->next;       // 第一个节点
            ListNode* second = current->next->next; // 第二个节点

            // 交换两个节点
            first->next = second->next;
            second->next = first;
            current->next = second;

            // 移动到下一组节点
            current = first;
        }

        // 返回修正后的链表头节点
        ListNode* result = dummy->next;
        delete dummy; // 删除虚拟头节点
        return result;

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
    ListNode* swapPairs(ListNode* head) {
       if(head == nullptr)
            return nullptr;
       if(head->next == nullptr)
            return head;
        else
        {
            auto ret = head->next;
            head->next = swapPairs(ret->next);//递归调用，处理后续的节点
            ret->next = head;

            return ret;
        }
    }
};