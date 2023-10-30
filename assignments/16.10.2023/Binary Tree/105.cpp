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
int pos(vector<int> in, int ele){
    for(int i=0;i<in.size();i++){
        if(in[i] == ele){
            return i;
        }
    }
    return -1;

}

TreeNode* solve(vector<int> &pre, vector<int> &in, int &index, int instart, int inend ){
    
    if(index >= pre.size() || instart > inend){
        return NULL;
    }

    
    int element  = pre[index++];
    TreeNode *root = new TreeNode(element);
    int posi =  pos(in, element);


    root->left = solve(pre, in, index, instart, posi-1);
    root->right = solve(pre, in, index, posi+1, inend);

    return root;
}
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int index = 0, instart = 0 , inend = in.size();
        return solve(pre, in, index, instart, inend);
    }
};