class Solution {
public:

pair<int,int> f(int i,int s,int tot,vector<int>&nums,vector<vector<pair<int,int>>>&dp)
{
    if(i==12)
    {
        return {0,0};
    }
    if(dp[i][s].first!=-1)
    return dp[i][s];
    pair<int,int> tk,nt={0,0};
    if(s+nums[i]+1<=tot)
    {
    tk=f(i+1,s+nums[i]+1,tot,nums,dp);
    tk={i+tk.first,1<<i|tk.second};
    }
    nt=f(i+1,s,tot,nums,dp);
   
    return dp[i][s]=max(tk,nt);
}
    vector<int> maximumBobPoints(int n, vector<int>& nums) {
       vector<int>ans(12,0);
        vector<vector<pair<int,int>>>dp(12,vector<pair<int,int>>(n+1,{-1,-1}));
        pair<int,int> x=f(0,0,n,nums,dp);
         int msk=x.second;
         int s=0;
         for(int i=0;i<12;i++)
         {
             if(msk&(1<<i))
             {
             ans[i]=nums[i]+1;
             s+=nums[i]+1;
             }
         }
         if(s<n)
         ans[0]+=(n-s);
        return ans;
    }
};