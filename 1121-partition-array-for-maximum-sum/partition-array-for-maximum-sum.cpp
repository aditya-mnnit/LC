class Solution {
public:
int f(int i,int n,vector<int>&arr,vector<int>&dp,int k)
{
    if(i==n)
    return 0;
    if(dp[i]!=-1)
    return dp[i];
    int mx=arr[i];
    int tk=0;
  for(int j=0;j<min(k,n-i);j++)
  {
      mx=max(mx,arr[i+j]);
      tk=max(tk,(mx*(j+1))+f(i+j+1,n,arr,dp,k));
  }
  return dp[i]=tk;
}
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
         ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
  
    
        int n=arr.size();
        vector<int>dp(n,-1);
        int ans=f(0,n,arr,dp,k);
        return ans;
    }
};