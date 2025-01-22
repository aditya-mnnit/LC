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
    int c=0,ans=-1;
    void f(TreeNode* p,int k)
    {
        if(p==NULL)
        return;
        f(p->left,k);
        c++;
        if(c==k)
        ans=p->val;
        f(p->right,k);
        
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        f(root,k);
        return ans;
    }
};