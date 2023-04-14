

    class Solution {
    public:
            vector<int> preorderTraversal(TreeNode* curr) {
            vector < int > preOrder;
            if (curr == NULL)
            return preOrder;

            stack < TreeNode * > s;
            s.push(curr);

        while (!s.empty()) {
                TreeNode * topNode = s.top();
                preOrder.push_back(topNode -> val);
                s.pop();
                if (topNode -> right != NULL)
                s.push(topNode -> right);
                if (topNode -> left != NULL)
                s.push(topNode -> left);
        }
        return preOrder;

        }
    };