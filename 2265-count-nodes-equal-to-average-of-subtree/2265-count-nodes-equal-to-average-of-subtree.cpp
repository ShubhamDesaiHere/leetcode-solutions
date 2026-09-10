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
    int res=0;
    int numN(TreeNode* root){
        if(!root)   return 0;
        return 1+numN(root->left)+numN(root->right);
    }
    int sumN(TreeNode* root){
        if(!root)   return 0;
        return root->val+sumN(root->left)+sumN(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        if(!root)   return 0;
        if(sumN(root)/numN(root)==root->val)
            res++;
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);
        return res;
    }
};