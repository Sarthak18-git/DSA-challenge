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
    vector<int> postorderTraversal(TreeNode* root) {
         if(root==NULL)return {};
         vector<int>ans;
         stack<TreeNode*>st;
         TreeNode* lastVisited=NULL;
         TreeNode* current=root;
         while(current!=NULL || !st.empty()){
            while(current!=NULL){
                st.push(current);
                current=current->left;
            }
            TreeNode* peek=st.top();
            if(lastVisited !=peek->right && peek->right!=NULL){
                current=peek->right;
            }
            else{
                ans.push_back(peek->val);
                st.pop();
                lastVisited=peek;
            }
         }
         return ans;
    }
};