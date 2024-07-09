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
    long getNumFromList(ListNode *l1)
    {
        if (l1->next == nullptr)
            return l1->val;
        return getNumFromList(l1->next) * 10 + l1->val;
    }
    ListNode *getListFromNum(int n)
    {
        ListNode *temp = new ListNode(n % 10);
        if (n >= 0 && n <= 9)
            return temp;

        else
        {
            temp->next = getListFromNum(n / 10);
            return temp;
        }
    }
    //     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    //         return getListFromNum( getNumFromList(l1) + getNumFromList(l2));
    //              // return new ListNode(getNumFromList(l1) + getNumFromList(l2));

    //     }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        if (!l1 && !l2)
            return NULL;
        int c = (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
        ListNode *newHead = new ListNode(c % 10), *next = l1 ? l1->next : NULL;
        c /= 10;
        if (next)
            next->val += c;
        else if (c)
            next = new ListNode(c);
        newHead->next = addTwoNumbers(l2 ? l2->next : NULL, next);
        return newHead;
    }
};