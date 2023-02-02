class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
        return true;
        if(height(root) == -1)
        return false;
        return true;
    }

    int height(TreeNode* root)
    {
        if(root==NULL)
        return 0;
        int height_left = height(root->left);
        int height_right = height(root->right);

        if(height_left == -1 || height_right == -1 || abs(height_left - height_right)>1)
        return -1;

        return max(height_left,height_right)+1;
    }
};
