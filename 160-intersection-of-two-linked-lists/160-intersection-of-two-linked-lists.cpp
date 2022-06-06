/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *x = headA, *y = headB;
        while (x != y) {
            x = !x ? headB : x->next;
            y = !y ? headA : y->next;
        }
        return x;
    }
};