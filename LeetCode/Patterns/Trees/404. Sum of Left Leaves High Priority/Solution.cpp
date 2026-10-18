class Solution {
public:
    int leftsum(TreeNode* root){
        if(root->left==NULL) return 0;
        return root->left->val+leftsum(root->left);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        
        if(root==NULL) return 0;
        return leftsum(root) + sumOfLeftLeaves(root->right);
        
    }
};