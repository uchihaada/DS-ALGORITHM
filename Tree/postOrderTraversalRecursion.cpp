 
 link: https://leetcode.com/problems/binary-tree-postorder-traversal/

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
    void helper(vector<int>&ans,TreeNode* node){
        if(node==NULL)return;

        helper(ans,node->left);
        helper(ans,node->right);
        ans.push_back(node->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        helper(ans,root);
        return ans;
    }
};