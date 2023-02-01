class Solution {
public:
    bool isValidBST(TreeNode* root) {

        vector<int> vals;
        inorder(root,vals);
        for(int i=0; i<vals.size()-1;i++)
        {
            if(vals[i]>=vals[i+1])
                return false;
        }
        return true;
        
    }
    void inorder(TreeNode* root, vector<int>& vals)
    {
        if(root)
        {
            inorder(root->left,vals);
            vals.push_back(root->val);
            inorder(root->right,vals);
        }
    }
};
