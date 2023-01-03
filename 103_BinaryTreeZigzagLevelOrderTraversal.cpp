/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void traverseZigZag(TreeNode* root, int level, vector<vector<int>> &ans){
        if(root==nullptr)
            return;
        if(ans.size() == level)
            ans.push_back(vector<int>());

        if(level%2){
            ans[level].insert(ans[level].begin(), root->val);
        }
        
        else 
            ans[level].push_back(root->val);
        
        traverseZigZag(root->left, level + 1, ans);
        traverseZigZag(root->right, level + 1, ans);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> answer;
        traverseZigZag(root, 0, answer);
        return answer;
    }
};