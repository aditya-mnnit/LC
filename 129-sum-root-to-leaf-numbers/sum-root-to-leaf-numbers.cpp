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
int s;
 void f(TreeNode* p,string w)
 {
     if(p->left==NULL&&p->right==NULL)
     {
         w.append(to_string(p->val));
        //  cout<<w<<"\n";
           s+=stoi(w);

     }
   
     if(p->left!=NULL)
     {
        //  cout<<w<<"\n";
         w.append(to_string(p->val));
        //  cout<<w<<"\n";
         f(p->left,w);
         w.pop_back();
     }
     if(p->right!=NULL)
     {
         w.append(to_string(p->val));
        //  cout<<w<<"\n";
         f(p->right,w);
     }
 }
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        s=0;
        string w="";
        f(root,w);
        return s;
    }
};