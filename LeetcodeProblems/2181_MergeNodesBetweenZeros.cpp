#include <iostream>

using namespace std;

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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *iter, *Target;
        iter = head;
        Target = head;
        while(iter->next != null){
            iter = iter->next;
            target->val += iter->val;
            if(iter->val == 0){
                if(iter->next == null){
                    target->next = nullptr;
                }
                else{
                    target->next = iter;
                    target = iter;
                }
            }
        }
        return head;
    }
};