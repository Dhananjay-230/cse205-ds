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
    map<int,int> mp;
    void mapping(vector<int> &in){
        for(auto i=0 ; i<in.size() ; i++){
            mp[in[i]] = i;
        }
    }
    TreeNode * solve(vector<int>& pre,vector<int>& in , int start,int end,int &idx){
        if(idx>=in.size() || start>end) return NULL;
        TreeNode * root = new TreeNode(pre[idx++]);
        int pos = mp[root->val];
        root->left = solve(pre,in,start,pos-1,idx);
        root->right = solve(pre,in,pos+1,end,idx);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder(preorder);
        sort(inorder.begin(),inorder.end());
        mapping(inorder);
        int index = 0;
        return solve(preorder,inorder,0,inorder.size()-1,index);
    }
};