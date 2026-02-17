
class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {
        int count = 1;
        ListNode *curr = head;
        ListNode *odd = new ListNode(0);
        ListNode *oddHead = odd;
        ListNode *even = new ListNode(0);
        ListNode *evenHead = even;

        while (curr)
        {
            if (count % 2 == 1)
            {
                ListNode *temp = curr;
                odd->next = temp;
                curr = curr->next;
                temp->next = nullptr;
                odd = odd->next;
            }
            else
            {
                ListNode *temp = curr;
                even->next = temp;
                curr = curr->next;
                temp->next = nullptr;
                even = even->next;
            }
            count++;
        }

        odd->next = evenHead->next;

        return oddHead->next;
    }
};