class Solution {
public:
int f(int x,int y,vector<int>&dp)
{
    if(x<y)
    return y-x;
    // if(x<=0)
    // return 1e9;
    if(x==y)
    return 0;
    if(dp[x]!=-1)
    return dp[x];
    int tk1=1e9,tk2=1e9,tk3=1e9;
    if(x%11==0)
    tk1=1+f(x/11,y,dp);
    else
    tk1=(11-(x%11))+1+f((x+11-(x%11))/11,y,dp);
    if(x%5==0)
    tk2=1+f(x/5,y,dp);
    else
     tk2=(5-(x%5))+1+f((x+5-(x%5))/5,y,dp);
    tk3=1+f(x-1,y,dp);
   
    return dp[x]=min(tk1,min(tk2,tk3));

}
    int minimumOperationsToMakeEqual(int x, int y) {
        if(x<=y)
        return y-x;
        vector<int>dp(x+1,-1);
        return f(x,y,dp);

        
    }
};