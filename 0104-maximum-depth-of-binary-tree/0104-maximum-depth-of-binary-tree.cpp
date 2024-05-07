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
    int maxDepth(TreeNode* root) {
        int leftDepth, rightDepth;
        if(root == nullptr) {
            return 0;
        }
        leftDepth = maxDepth(root->left);
        rightDepth = maxDepth(root->right);
        
        return max(leftDepth, rightDepth) + 1;
    }
};