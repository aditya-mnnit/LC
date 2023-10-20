class Solution {
public:
int mod=1e9+7;
int f(int i,int c,int step,int n,vector<vector<int>>&dp)
{
    if(i==n||i<0)
    return 0;
    if(c==step)
    {
        if(i==0)
        return 1;
        return 0;
    }
    if(dp[i][c]!=-1)
    return dp[i][c];
    int s=0;
     s=(s%mod+f(i,c+1,step,n,dp)%mod)%mod;
     s=(s%mod+f(i+1,c+1,step,n,dp)%mod)%mod;
     s=(s%mod+f(i-1,c+1,step,n,dp)%mod)%mod;
    return dp[i][c]=(s%mod);
}
    int numWays(int step, int n) {
        n=min(n,step/2+1);
        vector<vector<int>>dp(n+1,vector<int>(step+1,-1));
        return f(0,0,step,n,dp)%mod;
    }
};