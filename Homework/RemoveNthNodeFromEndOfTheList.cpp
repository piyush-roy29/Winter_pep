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
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *fast = head;
        if (head->next == NULL && n == 1)
        {
            return NULL;
        }
        // int count = 0;
        // while(fast->next && count < n){
        //     fast = fast->next;
        //     count++;
        // }
        for (int i = 0; i < n; i++)
        {
            fast = fast->next;
        }
        if (fast == NULL)
        {
            return head->next;
        }

        ListNode *slow = head;
        ListNode *prev = NULL;
        while (fast)
        {
            prev = slow;
            fast = fast->next;
            slow = slow->next;
        }
        // slow->next = slow->next->next;
        prev->next = slow->next;
        return head;
    }
};