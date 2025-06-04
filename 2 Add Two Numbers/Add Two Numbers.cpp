/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
  ListNode *head = nullptr, *tail = nullptr;
        int carry = 0;
        while (l1 || l2)
        {
            int n1 = l1 ? l1->val: 0;
            int n2 = l2 ? l2->val: 0;
            int sum = n1 + n2 + carry;
            if (!head) {
                head = tail = new ListNode(sum % 10);
            } else {
                tail->next = new ListNode(sum % 10);
                tail = tail->next;
            }
            carry = sum / 10;

            if (l1) {
                l1 = l1->next;
            }
            if (l2) {
                l2 = l2->next;
            }
        }
        if (carry > 0) {
            tail->next = new ListNode(carry);
        }
        return head;
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //从零开始，是第一位，相加如果大于9，则下一位需要加上进位1，负责加0，采用递归，直到所有数值计算完毕
        // 可以先计算头，作为返回

        int value1 =  L1 ? L1->val : 0; // l1当前位的值
        int value2 = L2 ? L2->val : 0; // l2当前位的值
        int sum = value1 + value2; // 当前位的和
        int carry = sum / 10; // 进位
        sum = sum % 10; // 当前位的值

        ListNode* ret = new ListNode(sum);
        ListNode* current = ret;

        ListNode* n1 = nullptr;
        ListNode* n2 = nullptr;

        if(l1) n1 = l1->next; // 如果n1不为空，则指向下一个节点
        if(l2) n2 = l2->next; // 如果n2不为空，则指向下一个节点

        while(n1 || n2)
        {
            value1 = n1 ? n1->val : 0; // 如果n1不为空，则取值，否则为0
            value2 = n2 ? n2->val : 0; // 如果n2不为空，则取值，否则为0
            sum = value1 + value2 + carry; // 当前位的和
            carry = sum / 10; // 计算进位
            sum = sum % 10; // 当前位的值

            current->next = new ListNode(sum); // 否则，创建一个新的节点，并将其链接到current的next
            current = current->next; // current指向下一个节点

            if(n1) n1 = n1->next; // 如果n1不为空，则指向下一个节点
            if(n2) n2 = n2->next; // 如果n2不为空，则指向下一个节点
        }

        if(carry > 0) // 如果最后还有进位，则需要创建一个新的节点
        {
            current->next = new ListNode(carry);
        }

        return ret; // 返回结果链表的头节点
    }
};