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
class Solution {
public:
    int base=0;
    int getNextNumber(ListNode* nP){
        if(nP->next==nullptr)
        return nP->val * pow(2,this->base);
        
        return getNextNumber(nP->next) + nP->val * pow(2,++base);
    }
    int getDecimalValue(ListNode* head) {
        return getNextNumber(head);
    }
};