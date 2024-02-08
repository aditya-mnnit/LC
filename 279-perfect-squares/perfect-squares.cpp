class Solution {
public:
int f(int i,int tar,vector<int>&nums,vector<vector<int>>&dp)
{
    if(i==0)
    {
        if(tar%nums[i]==0)
        return dp[0][tar]=tar/nums[i];
        else
        return dp[0][tar]= 1e9;
    }
    if(dp[i][tar]!=-1)
    return dp[i][tar];
    int nottake=0+f(i-1,tar,nums,dp);
    int take=INT_MAX;
    if(nums[i]<=tar)
     take=1+f(i,tar-nums[i],nums,dp);
     return dp[i][tar]=min(nottake,take);
}
    int numSquares(int n) {
        vector<int>nums;
        for(int i=1;i*i<=10000;i++)
        nums.push_back(i*i);
        int nu=nums.size();
        vector<vector<int>>dp(nu,vector<int>(n+1,-1));
        int ans=f(nu-1,n,nums,dp);
        return ans;

        
    }
};