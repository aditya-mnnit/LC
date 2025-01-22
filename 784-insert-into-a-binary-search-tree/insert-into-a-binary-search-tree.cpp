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
void f(TreeNode* p,int val)
{
    int data=p->val;
    if(val>data&&p->right==NULL)
    {
        TreeNode* x=new TreeNode(val);
    p->right=x;
    return ;
    }
    if(val<data&&p->left==NULL)
    {
        TreeNode* x=new TreeNode(val);
    p->left=x;
    return ;
    }
    if(val>data)
    {
        f(p->right,val);
    }
    if(val<data)
    {
        f(p->left,val);
    }
    return ;
}
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)
        {
            TreeNode* x=new TreeNode(val);
            root=x;
            return root;
        }
        f(root,val);

        return root;
    }
};