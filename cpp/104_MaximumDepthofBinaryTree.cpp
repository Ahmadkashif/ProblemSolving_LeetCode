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
class Solution
{
public:
    int maxDepthVal = 0;
    void preOrder(TreeNode *root, int depth)
    {
        if (root == nullptr)
            return;

        if (depth > maxDepthVal)
            maxDepthVal = depth;

        preOrder(root->left, depth + 1);
        preOrder(root->right, depth + 1);
    }
    int maxDepth(TreeNode *root)
    {
        preOrder(root, 0);
        return !root ? maxDepthVal : maxDepthVal + 1;
    }
};