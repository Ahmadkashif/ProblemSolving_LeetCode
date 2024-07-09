ListNode *swapPairs(ListNode *head)
{
    // base case
    if (head == NULL)
    {
        return NULL;
    }

    ListNode *forward = NULL;
    ListNode *prev = NULL;
    ListNode *curr = head;
    int count = 0;
    
    while (curr != NULL && count < 2)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    if (forward != NULL)
    {
        head->next = swapPairs(forward);
    }

    return prev;
}