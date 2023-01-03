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
    void traverse(TreeNode* root, vector<int> &arr){
        if(root==nullptr){
            arr.push_back(INT_MIN);
            return;
        }
        arr.push_back(root->val);
        traverse(root->left, arr);
        traverse(root->right, arr);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> pArr;
        vector<int> qArr;
        traverse(p, pArr);
        traverse(q, qArr);

        if(pArr.size() == qArr.size())
            for(int i = 0; i < pArr.size(); i++){
                if (pArr[i] != qArr[i])
                    break;
                
                if(i==pArr.size()-1)
                    return true;
            }

        return false;
    }
};