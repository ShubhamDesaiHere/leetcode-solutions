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

    TreeNode* solve(TreeNode* root, int l) {

        
        if (root == NULL)
            return NULL;

        
        l = l - root->val;

        
        if (root->left == NULL && root->right == NULL) {

            
            if (l > 0) {
                return NULL;
            }

            return root;
        }

        
        root->left = solve(root->left, l);
        
        root->right = solve(root->right, l);

        if (root->left == NULL && root->right == NULL) {
            return NULL;
        }

        return root;
    }

public:

    TreeNode* sufficientSubset(TreeNode* root, int limit) {

        return solve(root, limit);
    }
};