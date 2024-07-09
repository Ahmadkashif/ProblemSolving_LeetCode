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
    ListNode* deleteMiddle(ListNode* head) {
         ListNode* ptr1 = head;
        ListNode* temp = head;
        ListNode* prev = nullptr;
        if(head->next == nullptr){
            head = nullptr;
            return head;
        } 
        while(temp->next != nullptr){
            if(temp->next->next!=nullptr)
                temp = temp->next->next;
            else
                temp = temp->next;
            
            if(prev == nullptr)
                prev = head;
            else 
                prev = prev->next;
            
             ptr1 = ptr1->next;
        }
        prev->next = prev->next->next;
        
        return head;
    }
};