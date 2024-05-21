class Solution {
public:
void f(vector<int>& a,int i,int n,vector<vector<int>>&ans,vector<int>&ds)
{
    if(i>=n)
    {
ans.push_back(ds);
return;
    }
ds.push_back(a[i]);
f(a,i+1,n,ans,ds);
ds.pop_back();
f(a,i+1,n,ans,ds);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        int n=nums.size();
        f(nums,0,n,ans,ds);
        return ans;
    }
};