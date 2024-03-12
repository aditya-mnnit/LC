class Solution {
public:
  int c=0;
  bool dfs(int i,int j,int n,int m,vector<vector<int>>&grid, vector<vector<int>>&vis)
{
    if(i<0||j<0||i>=n||j>=m)
    return true;
    if(grid[i][j]==0||vis[i][j]==1)
    return false;
    vis[i][j]=1;
    bool t=dfs(i+1,j,n,m,grid,vis);
    bool b=dfs(i-1,j,n,m,grid,vis);
    bool l=dfs(i,j+1,n,m,grid,vis);
    bool r=dfs(i,j-1,n,m,grid,vis);
    bool ans=(t||b||l||r);
    if(!ans)
    c++;
    return ans;
}
    int numEnclaves(vector<vector<int>>& grid) {
         ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,-1));
        int ans=0;
        for(int i =0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               if(grid[i][j]==1&&vis[i][j]==-1)
                {
                    c=0;
                    if(dfs(i,j,n,m,grid,vis)==false)
                    {
                        // ans+=dfs2(i,j,n,m,grid);
                        ans+=c;
                        c=0;
                    }
                }
            }
            // cout<<"\n";
        }
       
        return ans;

    }
};