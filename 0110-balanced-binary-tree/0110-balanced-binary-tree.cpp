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
    int checkHeight(TreeNode*root){
        if(root==NULL)return -1;
        int leftHeight=checkHeight(root->left);
        if(leftHeight==-2)return -2;
        int rightHeight=checkHeight(root->right);
        if(rightHeight==-2)return -2;
         if(abs(leftHeight - rightHeight) > 1)
        return -2;

    return max(leftHeight, rightHeight) + 1;
    }
    bool isBalanced(TreeNode* root) {
        return checkHeight(root)!=-2;
    }
};