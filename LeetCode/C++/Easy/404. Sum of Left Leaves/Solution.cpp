class Solution {
public:
    int leftsum(TreeNode* root){
        if(root==NULL) return 0;
        // return root->left->val+leftsum(root->left);
        int x=0;
        if(root->left==NULL && root->right==NULL) {
            x+= root->val;
            return x;
        }
        return leftsum(root->left);
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        
        if(root==NULL) return 0;
        return leftsum(root->left) + sumOfLeftLeaves(root->right);
        
    }
};