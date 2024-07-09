class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        // if list1 happen to be NULL
        if (l1 == NULL)
        {
            return l2;
        }

        // if list2 happen to be NULL
        if (l2 == NULL)
        {
            return l1;
        }

        // if value pointend by l1 pointer is less than equal to value pointed by l2 pointer
        if (l1->val <= l2->val)
        {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else
        {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};