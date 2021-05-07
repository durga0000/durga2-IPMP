class Solution {
    public:
    void helper(TreeNode* root,vector<int>&v)
    {
        if(root!=NULL)
        {
            if(root->left!=NULL)
            {
                helper(root->left,v);
                
            }
            v.push_back(root->val);
            if(root->right!=NULL)
            {
                helper(root->right,v);
            }
        }
    }

    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int>v;
        helper(root,v);
       return v; 
    }
};
