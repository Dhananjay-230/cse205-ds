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
    private:
    int findsum(TreeNode *root, int &ans){
        if(root==NULL){
            return 0;
        }
      int left=  findsum(root->left, ans);
       int right= findsum(root->right,ans);
        int sum=root->val+left+right;
         int sum1=root->val+left;
         int sum2=root->val+right;
         sum=max(sum1,sum);
         sum2=max(sum,sum2);
         ans=max(ans,sum2);
         ans=max(ans,root->val);
         
         return max(root->val, max(left,right)+root->val);
    }
public:
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        int f= findsum(root, ans);
          ans=max(ans,root->val);
         return ans;
    }
};