

link: https://leetcode.com/problems/binary-tree-preorder-traversal/description/


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
    void helper(vector<int>&ans,TreeNode* root){
        if(root==NULL)return;
        ans.push_back(root->val);
        helper(ans,root->left);
        helper(ans,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        helper(ans,root);
        return ans;
    }
};