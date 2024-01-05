class Solution {
public:
int f(int i,int p,int n,vector<int>&nums,  vector<vector<int>>&dp)
{
if(i==n)
return 0;
if(dp[i][p+1]!=-1)
{
    return dp[i][p+1];
}
int np=0+f(i+1,p,n,nums,dp);
int pk=INT_MIN;
if(p==-1||nums[i]>nums[p])
{
pk=1+f(i+1,i,n,nums,dp);
}
// cout<<i<<" "<<np<<" "<<pk<<"\n";
return dp[i][p+1]=max(np,pk);
}
    int lengthOfLIS(vector<int>& nums) {
             ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
  
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        int ans=f(0,-1,n,nums,dp);
       
        // cout<<"\n";
        return ans;

    }
};