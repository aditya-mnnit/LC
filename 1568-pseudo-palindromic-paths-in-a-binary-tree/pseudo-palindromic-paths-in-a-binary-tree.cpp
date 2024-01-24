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
int c=0;
vector<int>mp;

void dfs( TreeNode *p)
{
    int v=p->val;
    mp[v]++;
  
    int f=1;
    if(p->left!=NULL)
    {
    dfs(p->left);
    f=0;
    }
    if(p->right!=NULL)
    {
        dfs(p->right);
        f=0;
    }
    if(f==1)
    {
        int k=0;
       for(int i=1;i<=9;i++)
       {
           if(mp[i]&1)
           k++;
       }
       if(k<=1)
       c++;
    }
    mp[v]--;
}
    int pseudoPalindromicPaths (TreeNode* root) {
        mp.assign(10,0);
        dfs(root);
        
        return c;
    }
};