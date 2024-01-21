class Solution {
public:
int f(vector<int>nums,int i,int n,vector<int>&dp)
{
    if(i>=n)
    return 0;
    if(dp[i]!=-1)
    return dp[i];

    return dp[i]=max(nums[i]+f(nums,i+2,n,dp),0+f(nums,i+1,n,dp));
}
    int rob(vector<int>& nums) {
        int s=0,s2=0;
        int n=nums.size();
        vector<int>dp;
        dp.assign(n,-1);
    int ans=f(nums,0,n,dp);
    return dp[0];
       
    }
};