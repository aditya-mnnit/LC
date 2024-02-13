class Solution {
public:
int c=0;
vector<int>v;
void f(int i,int n,int k,vector<int>&nums)
{
if(i==n)
{
    if(v.size()>0)
   c++;
    return;

}
int fl=0;
for(int j=0;j<v.size();j++)
{
    if(v[j]==nums[i]+k||v[j]==nums[i]-k)
    {
        fl=1;
        break;
    }
}
if(fl==0)
{
v.push_back(nums[i]);
f(i+1,n,k,nums);
v.pop_back();
}
f(i+1,n,k,nums);
}
    int beautifulSubsets(vector<int>& nums, int k) {
        int n=nums.size();
        f(0,n,k,nums);
        return c;
    }
};