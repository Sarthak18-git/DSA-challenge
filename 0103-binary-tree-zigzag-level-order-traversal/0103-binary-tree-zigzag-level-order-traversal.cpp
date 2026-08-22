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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)return{};
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        bool leftToRight=true;
        while(!q.empty()){
            int levelsize=q.size();
            vector<int>level(levelsize);
            for(int i=0;i<levelsize;i++){
                TreeNode*current=q.front();
                q.pop();
                int idx;
                if(leftToRight)idx=i;
                else idx=levelsize-1-i;
                level[idx]=current->val;
                if(current->left)q.push(current->left);
                if(current->right)q.push(current->right);
            }
            leftToRight=!leftToRight;
            ans.push_back(level);
        }
        return ans;
    }
};