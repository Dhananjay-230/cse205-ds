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
class BSTIterator {
public:
TreeNode* curr;
    BSTIterator(TreeNode* root) {
      this->curr=root;  
    }
    
    int next() {
        while(curr)
        {
            if(curr->left==NULL)
            {
                TreeNode* x=curr;
                curr=curr->right;
                return x->val;
            }
            else
            {
                TreeNode* prev=curr->left;
                while(prev->right&&prev->right!=curr)
                prev=prev->right;
                if(prev->right==NULL)
                {
                    prev->right=curr;
                    curr=curr->left;
                }
                else
                {
                    prev->right=NULL;
                    TreeNode* x=curr;
                    curr=curr->right;
                    return x->val;
                }

                
            }
        }
        return -1;
        
    }
    
    bool hasNext() {
        if(curr)
        return true;
        return false;
        
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */