

link: https://leetcode.com/problems/balanced-binary-tree/

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

## Approach 1

class Solution {
    private:
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        
        int l=height(root->left);
        int r=height(root->right);
        
        return 1+max(l,r);
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        
        int lh=height(root->left);
        int rh=height(root->right);
        
        if(abs(lh-rh)>1){
            return false;
        }
        
        bool left=isBalanced(root->left);
        bool right =isBalanced(root->right);
        
        
        if(left!=true || right!=true){
            return false;
        }
        return true;
        
        
    }
};


## Approach 2
class Solution {
public:

    int difHeight(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=difHeight(root->left);
        if(left==-1)return -1;

        int right=difHeight(root->right);
        if(right==-1)return -1;

        if(abs(left-right)>1)return -1;
        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        return difHeight(root)!=-1;
    }
};