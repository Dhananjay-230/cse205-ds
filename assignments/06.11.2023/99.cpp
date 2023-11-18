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
    TreeNode *prev = NULL, *first = NULL, *second = NULL;
public:
    void recoverTree(TreeNode* root) {
        inorder(root);
        int temp = first->val;
        first->val = second->val;
        second->val = temp;
    }
    void inorder(TreeNode* root) {
        if(!root) return;
        inorder(root->left);
        if(prev && root->val < prev->val) {
            if(!first)
                first = prev;
            second = root;
        }
        prev = root;
        inorder(root->right);
    }
};