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
#include<cmath>
class Solution {
public:

    int maxPathS = INT_MIN;

    int traverse(TreeNode* root){

        if( root == nullptr )
            return 0;

        int leftPathSum = traverse(root->left);
        int rightPathSum = traverse(root->right);

        int maxOfTwo = max(leftPathSum, rightPathSum);

        if( maxPathS < root->val)
            maxPathS = root->val;
        // if( maxPathS < maxOfTwo)
        //     max
        if(maxPathS < maxOfTwo + root->val)
            maxPathS = maxOfTwo + root->val;

        if(maxPathS < leftPathSum + rightPathSum + root->val)
            maxPathS = leftPathSum + rightPathSum + root->val;

        return root->val + maxOfTwo < root->val ? root->val: root->val + maxOfTwo ;
    }

    int maxPathSum(TreeNode* root) {
        if( root->left == nullptr && root->right == nullptr )
            return root->val;
        int lastCalc = traverse(root);
        return maxPathS < lastCalc ? lastCalc: maxPathS;
    }
};