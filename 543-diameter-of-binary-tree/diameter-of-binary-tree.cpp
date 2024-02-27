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
int mx=INT_MIN;
int f(TreeNode* p)
{
    if(p==NULL)
    return 0;
    int hl=1+f(p->left);
    int hr=1+f(p->right);
    mx=max(mx,hl+hr-1);
    return max(hl,hr);
}
    int diameterOfBinaryTree(TreeNode* root) {
        f(root);
        return mx-1;
    }
};