class Solution {
public:
int mod=1e9+7;
int f(int i,int n,int c,string &s,vector<vector<int>>&dp)
{
    if(i==n)
    {
        if(c==2)
        return 1;
        return 0;
    }
    if(dp[i][c]!=-1)
    return dp[i][c];
    int mi=0;
   if(s[i]=='S')
   {
       if(c==2)
       mi=f(i+1,n,1,s,dp)%mod;
    //    else if(c==1)
    //    mi=f(i+1,n,c+1,s,dp)+f(i+1,n,0,s,dp);
       else
       mi=f(i+1,n,c+1,s,dp)%mod;
   }
   else
   {
       if(c==2)
   mi=(f(i+1,n,c,s,dp)%mod+f(i+1,n,0,s,dp)%mod);
   else
   mi=f(i+1,n,c,s,dp)%mod;
   }
   return dp[i][c]=mi%mod;
    
}
    int numberOfWays(string s) {
        int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(4,-1));
        return f(0,n,0,s,dp)%mod;
    }
};