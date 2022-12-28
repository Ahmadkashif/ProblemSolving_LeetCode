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
    
    int traverse(TreeNode* root){
        if( root == nullptr)
            return 0;


        int leftH = traverse(root->left);
        int rightH = traverse(root->right);
        
        if ( leftH == -1 || rightH == -1 || abs(leftH-rightH) > 1 )
            return -1;

        return 1 + max(leftH, rightH);
    }

    bool isBalanced(TreeNode* root) {
        return traverse(root) >= 0;
    }

};