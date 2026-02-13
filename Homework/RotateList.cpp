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
class Solution
{
    int getLen(ListNode *node)
    {
        int count = 0;
        while (node)
        {
            count++;
            node = node->next;
        }
        return count;
    }

public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head || !head->next || k == 0)
            return head;

        int len = getLen(head);
        k = k % len;
        if (k == 0)
            return head;

        int stepsToNewTail = len - k - 1;
        ListNode *newTail = head;

        for (int i = 0; i < stepsToNewTail; i++)
        {
            newTail = newTail->next;
        }

        ListNode *newHead = newTail->next;
        newTail->next = nullptr;

        ListNode *tail = newHead;
        while (tail->next)
        {
            tail = tail->next;
        }
        tail->next = head;

        return newHead;
    }
};
