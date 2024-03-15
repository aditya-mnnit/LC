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
 int ans=INT_MIN;
 int f(TreeNode *p)
 {
    if(p==NULL)
    {
        return 0;
    }
    int l=f(p->left);
    int r=f(p->right);
    int mx=0;
    mx=max(mx,max(l,r));
    int lval,rval;
    if(l<0)
    lval=0;
    else
    lval=l;
    if(r<0)
    rval=0;
    else
    rval=r;
    ans=max(ans,(p->val)+lval+rval);
    return p->val+mx;

 }
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        ans=INT_MIN;
        int x=f(root);
        return ans;
        
    }
};