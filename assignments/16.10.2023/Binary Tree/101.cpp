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
    bool sol(TreeNode* root1,TreeNode* root2){
        if(root1==NULL && root2==NULL){
            return true;
        }
        if(root1!=NULL && root2==NULL){
            return false;
        }
        if(root1==NULL && root2!=NULL){
            return false;
        }

        bool op1 = sol(root1->left,root2->right);
        bool op2 = sol(root1->right,root2->left);
        bool condn = root1->val == root2->val;
        if(op1 && op2 && condn){
            return true;
        }
        else{
            return false;
        }
    }
    bool isSymmetric(TreeNode* root) {
        TreeNode* root1 = root->left;
        TreeNode* root2 = root->right;
        return sol(root1,root2);
    }
};