class Solution {
public:
    TreeNode*prev=nullptr;
    bool flag=true;
    void inorder(TreeNode* root)
    {
        if(root==nullptr)
        return;
        inorder(root->left);
        if(prev!=nullptr && prev->val >= root->val){
        flag=false;
        return;
        }
        prev=root;
        inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        inorder(root);
        return flag;
    }

};
//true
