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
    int htree(TreeNode *root)
    {
        if(root==NULL)
        {
            return 0 ;
        }
        int x = htree(root->left) ;
        int y = htree(root->right) ;
        return 1 + max(x,y) ;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        {
            return true ;
        }
        bool x = isBalanced(root->left) ;
        int leftheight = -1 ;
        if(x)
        {
            leftheight = htree(root->left) ;
        }
        else
        {
            return false ;
        }
        bool y = isBalanced(root->right) ;
        int rightheight = -1 ;
        if(y)
        {
            rightheight = htree(root->right) ;
        }
        else
        {
            return false ;
        }
        if(abs(leftheight-rightheight)==0 ||abs(leftheight-rightheight)==1)
        {
            return true ;
        }
        else
        {
            return false ;
        }
    }
};