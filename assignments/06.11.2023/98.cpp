class Solution {
public:
   long long prev=LLONG_MAX;// inital value of prev
    bool isValidBST(TreeNode* root) 
    {
        if(root==0)
            return true;
        bool left=isValidBST(root->left);
        if(prev==LLONG_MAX)
        {
            prev=root->val;
        }
       else
       {
            int curr=root->val;
            if(prev>=curr)
            return false;
        prev=curr;
       }
        bool right=isValidBST(root->right);
        return left&&right;
    }
};