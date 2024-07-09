class Solution
{
public:
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {
        ListNode *temp = list1;
        ListNode *temp2;
        int s = a, e = b;
        while (s - 1)
        {
            temp = temp->next;
            s--;
        }

        temp2 = temp;

        while (e - a + 2)
        {
            temp2 = temp2->next;
            a++;
        }

        temp->next = list2;

        while (list2->next)
        {
            list2 = list2->next;
        }

        list2->next = temp2;
        // temp2->next = nullptr;
        return list1;
    }
};