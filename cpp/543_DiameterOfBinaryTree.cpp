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
    int globalDiameter = 0;

    int traverse(TreeNode* root){

        int edges;

        if( root == nullptr )
            return 0;

        int leftD = traverse(root->left);
        int rightD = traverse(root->right);

        int maxOfTwo = max(leftD, rightD);

        if(globalDiameter < leftD+rightD)
            globalDiameter = leftD+rightD;

        return 1 + maxOfTwo;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(!root || root->left == nullptr && root->right == nullptr ) return 0;
        traverse(root);
        return globalDiameter;
    }
};