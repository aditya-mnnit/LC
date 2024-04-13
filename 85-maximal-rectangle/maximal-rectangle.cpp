class Solution {
public:
    int maximalRectangle(vector<vector<char>>& nums) {
        int n=nums.size();
        int m=nums[0].size();
        vector<vector<int>>v(n,vector<int>(m,0));
         vector<vector<int>>dp(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            v[i][0]=nums[i][0]-'0';
            for(int j=1;j<m;j++)
            {
                if(nums[i][j]=='1')
               v[i][j]=nums[i][j]-'0'+v[i][j-1];
               else
               v[i][j]=0;
            }
        }
        //   for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         cout<<v[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int mi=INT_MAX;
                int c=0;
                for(int k=i;k>=0;k--)
                {
                    c++;
                    mi=min(mi,v[k][j]);
                    dp[k][j]=max(dp[k][j],mi*c);
                }
            }
        }
        int ans=0;
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans=max(ans,dp[i][j]);
            }
        }
        return ans;

    }
};