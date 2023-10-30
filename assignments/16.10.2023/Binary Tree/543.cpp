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
    int hieght(TreeNode *root){
        if (root==NULL){
            return 0;
        }
        else{
            int ldepth = hieght(root->left);
            int rdepth =hieght(root->right);
            if(ldepth>rdepth){
                return ldepth +1;

            }
            else{
                return rdepth +1;
            }
        }
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (root==NULL){
            return 0;
        }
        else{
            int pt1=diameterOfBinaryTree(root->left);
            int pt2=diameterOfBinaryTree(root->right);
            int pt3=hieght(root->left)+hieght(root->right); 
            int ans=max(pt1, max(pt2,pt3));
            return ans; 
        }
        
    }
};