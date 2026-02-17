
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

        prev->next = slow->next;
        return head;
    }
};