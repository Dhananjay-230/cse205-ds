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
 void ans(TreeNode*x,int c,int y,map<int,vector<pair<int,int>>>&m)
 {
     if(x==NULL)
     return ;
m[c].push_back({y,x->val});
ans(x->left,c-1,y+1,m);
ans(x->right,c+1,y+1,m);
 }
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
    map<int,vector<pair<int,int>>>m;
ans(root,0,0,m);
vector<vector<int>>a;
for(auto i=m.begin();i!=m.end();i++){
    vector<pair<int,int>>y=i->second;
    sort(y.begin(),y.end());
    vector<int>u;
    for(int i=0;i<y.size();i++)
    u.push_back(y[i].second);
a.push_back(u);
}
return a;
    }
};