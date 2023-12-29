class Solution {
public:
int f(int i,int c,int k,vector<int>&nums,vector<vector<int>>&dp)
{
    int n=nums.size();
    if(i==n)
    {
        if(c==k)
    return 0;
    return 1e9;
    }
    if(c==k)
    return 1e9;
    if(dp[i][c]!=-1)
    return dp[i][c];
    int tk=INT_MAX;
    int mx=0;
    for(int j=i;j<n;j++)
    {
        mx=max(mx,nums[j]);
        int tk1=0;
        //  if(j==n-1&&c!=k-1)
        // tk1=1e9;
        // else if(c+1<k)
        tk1=f(j+1,c+1,k,nums,dp);
       
        tk=min(tk,mx+tk1);
    }
    return dp[i][c]=tk;
}
    int minDifficulty(vector<int>& job, int d) {
        int n=job.size();
        if(n<d)
        return -1;
        vector<vector<int>>dp(n,vector<int>(d+1,-1));
        return f(0,0,d,job,dp);
    }
};