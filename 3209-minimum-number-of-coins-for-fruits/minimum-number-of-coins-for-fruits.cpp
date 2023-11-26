class Solution {
public:
int f(int i,int n,vector<int>&prices,vector<int>&dp)
{
    if(i>=n)
    return 0;
   if(dp[i]!=-1)
   return dp[i];
int l=i+(i+2);
int mi=INT_MAX;
for(int j=i+1;j<=min(l,n);j++)
{
    mi=min(mi,f(j,n,prices,dp));
}
return dp[i]= mi+prices[i];
}
    int minimumCoins(vector<int>& prices) {
        int n=prices.size();
        vector<int>dp(n,-1);
        return f(0,n,prices,dp);
    }
};