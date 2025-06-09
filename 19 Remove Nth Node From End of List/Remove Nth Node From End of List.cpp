
/**


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        stack<ListNode*> stk;
        ListNode* cur = dummy;
        while (cur) {
            stk.push(cur);
            cur = cur->next;
        }

        for (int i = 0; i < n; ++i) {
            stk.pop();
        }

        ListNode* prev = stk.top();
        prev->next = prev->next->next;
        ListNode* ans = dummy->next;
        delete dummy;
        return ans;
    }
};



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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto tempNode = head;
        int length = 1;

        while(tempNode->next != nullptr) {
            tempNode = tempNode->next;
            ++length;
        }

        if(length == n) {
            return head->next;
        }

        tempNode = head;
        for(int i = 1; i < length - n; ++i) {
            tempNode = tempNode->next;
        }

        tempNode->next = tempNode->next->next;

        return head;
    }
};


