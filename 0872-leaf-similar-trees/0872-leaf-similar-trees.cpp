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
    void traverseTree(TreeNode* root, vector<int>& v) {
        
        if(root == nullptr) {
            return;
        }
        
        if(root->left == nullptr && root->right == nullptr) {
            v.push_back(root->val);
            return;
        }
        traverseTree(root->left, v);
        traverseTree(root->right, v);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        vector<int> v1, v2;
        traverseTree(root1, v1);
        traverseTree(root2, v2);
        
        int n1 = v1.size();
        int n2 = v2.size();
        
        if(n1 != n2) {
            return false;
        }
        
        for(int i=0; i<n1; i++) {
            if(v1[i] != v2[i]) {
                return false;
            }
        }
        
        return true;
    }
};