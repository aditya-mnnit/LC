class Solution {
public:
int mod=1e9+7;
int f(int i, int p,int n,vector<vector<long long>>&dp)
{
if(i==n)
{
    return 1;
}
if(dp[i][p]!=-1)
return dp[i][p];
long long tk=0;
if(p==0)
{
    tk+=f(i+1,1,n,dp)%mod;
    tk+=f(i+1,2,n,dp)%mod;
    tk+=f(i+1,3,n,dp)%mod;
    tk+=f(i+1,4,n,dp)%mod;
    tk+=f(i+1,5,n,dp)%mod;
}
else if(p==1)
{
    tk+=f(i+1,2,n,dp)%mod;
}
else if(p==2)
{
    tk+=f(i+1,1,n,dp)%mod;
    tk+=f(i+1,3,n,dp)%mod;
}
else if(p==3)
{
    tk+=f(i+1,1,n,dp)%mod;
    tk+=f(i+1,2,n,dp)%mod;
    // tk+=f(i+1,3,n,dp)%mod;
    tk+=f(i+1,4,n,dp)%mod;
    tk+=f(i+1,5,n,dp)%mod;
}
else if(p==4)
{
    tk+=f(i+1,3,n,dp)%mod;
    tk+=f(i+1,5,n,dp)%mod;
}
else if(p==5)
{
    tk+=f(i+1,1,n,dp)%mod;
}
return dp[i][p]=tk%mod;

}
    int countVowelPermutation(int n) {
        vector<vector<long long>>dp(n,vector<long long>(6,-1));
        return f(0,0,n,dp);
    }
};