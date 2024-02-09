class Solution {
public:
int f(int i,int pre,vector<int>&nums,vector<vector<int>>&dp)
{
    if(i==nums.size())
    return 0;
    if(dp[i][pre+1]!=-1)
    return dp[i][pre+1];
    int pk=0,np;
    np=f(i+1,pre,nums,dp);
    if(pre==-1||nums[i]%nums[pre]==0)
    {
        pk=1+f(i+1,i,nums,dp);
    }
    return dp[i][pre+1]= max(pk,np);
}
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
      vector<vector<int>>v(n+1);
      vector<int>dp(n,1);
      for(int i=0;i<n;i++)
      {
          vector<int>tp;
           tp.push_back(nums[i]);
          for(int j=i-1;j>=0;j--)
          {
             
              if(nums[i]%nums[j]==0)
              {
                  if((dp[j]+1)>dp[i])
                  {
                      tp.clear();
                      tp.push_back(nums[i]);
                      tp.insert(tp.end(), v[j].begin(), v[j].end());
                      dp[i]=dp[j]+1;
                  }
              }
          }
          v[i]=tp;
      }
      vector<int>ans;
      int mx=0;
      for(int i=0;i<n;i++)
      {
          if(dp[i]>mx)
          {
              mx=dp[i];
              ans=v[i];
          }
      }
      return ans;
      
    }
};