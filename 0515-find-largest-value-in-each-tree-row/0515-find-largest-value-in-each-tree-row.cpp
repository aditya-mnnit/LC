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

void dfs(TreeNode* p,int h,vector<long>&dp)
{
    if(p==NULL)
    return;
    dp[h]=max(dp[h],(long)p->val);
    dfs(p->left,h+1,dp);
   dfs(p->right,h+1,dp);
}
    vector<int> largestValues(TreeNode* root) {
       vector<long>dp(10001);
for(int i=0;i<10001;i++)
dp[i]=(pow(2,31)*-1)-1;
        dfs(root,0,dp);
        vector<int>v;
        for(int i=0;i<10001;i++)
        {
            if(dp[i]<INT_MIN)
            break;
            else
            v.push_back(((int)dp[i]));
        }
        return v;
        
    }
};