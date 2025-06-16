Given a linked list, swap every two adjacent nodes and return its head. 
You must solve the problem without modifying the values in the list's nodes
(i.e., only nodes themselves may be changed.)

给你一个链表，两两交换其中相邻的节点，并返回交换后链表的头节点。
你必须在不修改节点内部的值的情况下完成本题（即，只能进行节点交换）

Example 1:
    Input: head = [1,2,3,4]
    Output: [2,1,4,3]

Explanation:
![img.png](img.png)

Example 2:
    Input: head = []
    Output: []

Example 3:
    Input: head = [1]
    Output: [1]

Example 4:
    Input: head = [1,2,3]
    Output: [2,1,3]

Constraints:
    The number of nodes in the list is in the range [0, 100].
    0 <= Node.val <= 100