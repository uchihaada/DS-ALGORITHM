

link: https://leetcode.com/problems/binary-tree-level-order-traversal/

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL)return ans;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>ds;
            for(int i=0;i<size;i++){
                TreeNode* ada = q.front();
                q.pop();
                if(ada->left)q.push(ada->left);
                if(ada->right)q.push(ada->right);
                ds.push_back(ada->val);
            }
            ans.push_back(ds);
        }
        return ans;
    }
};