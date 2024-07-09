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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> v(m, vector<int> (n, -1));
        int i=0, j=0, t=0, l=0, b=m-1, r=n-1; //t=top, l=left, b=bottom, r=right
        while(head) {
            v[i][j]=head->val;
            head=head->next;
            if(i == t && j < r) {j++; if(j==r) t++;}  // fill top most unfilled row 
            else if(j == r && i < b) {i++; if(i==b) r--;} // fill right most unfilled column
            else if(i == b && j > l) {j--; if(j==l) b--;} // fill bottom most unfilled row
            else if(j == l && i > t) {i--; if(i==t) l++;} // fill left most unfilled column
        }
        return v;
    }
};