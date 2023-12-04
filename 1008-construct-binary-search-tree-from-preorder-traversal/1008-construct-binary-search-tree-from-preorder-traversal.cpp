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
    TreeNode* newNode(int val) {
	    TreeNode* temp=new TreeNode();

	    temp->val=val;
	    temp->left=NULL;
        temp->right=NULL;

	    return temp;
    }
    
    TreeNode* bstPreorderUtil(vector<int>& preorder, int* preInd, int k, int mn, int mx, int n) {
        if (*preInd>=n)
		    return NULL;

	    TreeNode* root=NULL;
	    if(k>mn&&k<mx) {
		    root=newNode(k);
		    *preInd=*preInd+1;

		    if(*preInd<n) {
			    root->left=bstPreorderUtil(preorder,preInd,preorder[*preInd],mn,k,n);
		    }
		    if (*preInd<n) {
			    root->right=bstPreorderUtil(preorder,preInd,preorder[*preInd],k,mx,n);
		    }
	    }

	    return root;
    }
    
    TreeNode* bstPreorder(vector<int>preorder, int n) {
	    int preInd=0;
	    return bstPreorderUtil(preorder,&preInd,preorder[0],INT_MIN,INT_MAX,n);
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n=preorder.size();
        TreeNode* root=bstPreorder(preorder, n);
        
        return root;
    }
};